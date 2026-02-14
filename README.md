# C++ Exercises (Course Portfolio)

This repository contains a collection of C++ programming exercises completed during my studies.  
Each task resides in its own folder and can be built either with **CMake (CLion)** or directly using **g++**, depending on the task folder.

> This repo is intentionally kept clean from editor/build artifacts (e.g., `.idea/`, `cmake-build-*`). Only source files (e.g., `main.cpp`, headers, and `CMakeLists.txt` when applicable) are versioned.

---

## 📁 Folder Index

- [T4/](./T4/)
- [T5/](./T5/)
- [T6/](./T6/)
- [T7/](./T7/)
- [T8_v2/](./T8_v2/)
- [T9/](./T9/)
- [T10/](./T10/)
- [T11/](./T11/)
- [T12/](./T12/)
- [T13/](./T13/)
- [T14/](./T14/)
- [T15/](./T15/)
- [T16/](./T16/)
- [T17/](./T17/)
- [T18/](./T18/)
- [T19/](./T19/)
- [T20/](./T20/)
- [T21/](./T21/)
- [T22/](./T22/)
- [T23/](./T23/)
- [T24/](./T24/)
- [T25/](./T25/)
- [T26/](./T26/)
- [T27/](./T27/)
- [T28/](./T28/)
- [T29/](./T29/)
- [T30/](./T30/)
- [T31/](./T31/)
- [T32/](./T32/)

*(Folder names based on the public repository listing.)*

---

## 🛠️ How to Build & Run

### Option A — CMake (recommended when `CMakeLists.txt` exists)
```bash
cmake -S . -B build
cmake --build build --config Release
# Run the resulting executable from the build directory
./build/<executable_name>     # Linux/macOS
./build/Release/<exe_name>.exe # Windows (if using MSVC)
