# Task T4 (Folder: T4)

**Goal:** Briefly describe what this program does in 1–2 sentences.

## Build & Run (CMake)
```bash
cmake -S . -B build
cmake --build build --config Release
./build/<executable_name>        # Linux/macOS
.\build\Release\<exe>.exe        # Windows (MSVC)

g++ -std=c++17 -O2 main.cpp -o app
./app            # Linux/macOS
.\app.exe        # Windows

What I Learned
