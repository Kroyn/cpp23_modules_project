# C++ Modules Project Example
This is an experimental project for educational purposes.
Project in the C++23.

## Requirement
Install CMake, Ninja and GCC.

For example for Arch Linux using pacman:
```bash
sudo pacman -S cmake ninja gcc
```
Optimal:
```bash
sudo pacman -S clang
```

Make sure are you using latest version CMake 4.0+, Ninja 1.12+ and GCC 15+ (optimal: Clang 19+).

Print this commands in terminal to make sure:
```bash
cmake --version
ninja --version
gcc --version

# Optimal
clang --version
```

## Build
To build project use this commands:
```bash
cmake -G Ninja -S. -Bbuild
cmake --build build
```

And executable binary is located in `/build/main`.
## Epilogue
I hope you found this repository useful, and if you have any questions or bugs, feel free to open an Issue.

And finally, I'd like to add that I will continue to develop it.
