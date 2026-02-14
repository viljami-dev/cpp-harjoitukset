#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
gen_readmes.py
--------------
Creates English README.md files for each task folder and a root README with an
auto-generated folder index. Designed for a C++ exercise portfolio.

Default behavior:
- Scans immediate subfolders under --root (default: current directory)
- Creates README.md in each folder that contains at least one .cpp (or CMakeLists.txt)
- Does NOT overwrite existing README.md unless --force is provided
- Creates/updates root README.md:
  * If README.md doesn't exist -> create a concise root README
  * If README.md exists -> (idempotently) updates index between markers:
      <!-- AUTO_INDEX_START --> ... <!-- AUTO_INDEX_END -->

Usage examples:
  python gen_readmes.py
  python gen_readmes.py --root . --force
  python gen_readmes.py --dry-run
"""

from __future__ import annotations
import argparse
from pathlib import Path
import re
from typing import List, Tuple

INDEX_START = "<!-- AUTO_INDEX_START -->"
INDEX_END   = "<!-- AUTO_INDEX_END -->"

IGNORED_DIRS = {
    ".git", ".idea", ".vscode", "__pycache__", "build", "cmake-build-debug",
    "cmake-build-release", "CMakeFiles", ".DS_Store"
}

def looks_like_task_dir(d: Path) -> bool:
    """A directory qualifies if it contains at least one .cpp OR a CMakeLists.txt."""
    if not d.is_dir():
        return False
    name = d.name
    if name in IGNORED_DIRS or name.startswith("."):
        return False
    # Do not descend into common build/meta folders by prefix
    for bad_prefix in ("cmake-build-",):
        if name.startswith(bad_prefix):
            return False
    has_cpp = any(f.suffix.lower() == ".cpp" for f in d.glob("*.cpp"))
    has_cmake = (d / "CMakeLists.txt").exists()
    return has_cpp or has_cmake

def discover_task_dirs(root: Path) -> List[Path]:
    return sorted([d for d in root.iterdir() if looks_like_task_dir(d)], key=lambda p: p.name.lower())

def task_readme_content(folder_name: str) -> str:
    """Unified, compact README content in English."""
    return f"""# Task {folder_name} (Folder: {folder_name})

**Goal:** Briefly describe what this program does in 1–2 sentences.

## Build & Run (CMake or g++)
**CMake** (if `CMakeLists.txt` exists):
```bash
cmake -S . -B build
cmake --build build --config Release
./build/<executable_name>        # Linux/macOS
.\build\\Release\\<executable>.exe # Windows (MSVC)
