# C++23 Modules Project Example
This is an experimental project for educational purposes.

## Requirement
Install CMake, Ninja and GCC.

For example for Arch Linux using pacman:
```bash
sudo pacman -S cmake ninja gcc
```

Make sure are you using latest version CMake 3.25+, Ninja 1.12+ and GCC 15+.
And all this with Linux of course.

Print this commands in terminal to make sure:
```bash
cmake --version
ninja --version
gcc --version
```

## Build
To build project use this commands:
```bash
cmake -G Ninja -S. -Bbuild
cmake --build build
```

And binary is located in `/build/main`.
## Epilogue
I hope you found this repository useful, and if you have any questions or bugs, feel free to open an Issue.

And finally, I'd like to add that I will continue to develop it.
