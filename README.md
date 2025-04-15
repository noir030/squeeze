![File-Explorer](https://github.com/user-attachments/assets/5855433e-577b-4446-b01f-e30b4cf92987)
# About <picture> <source srcset="https://fonts.gstatic.com/s/e/notoemoji/latest/1f3ac/512.webp" type="image/webp"> <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f3ac/512.gif" alt="🎬" width="32" height="32"> </picture>
This is a lightweight file archiver written in C++ that uses the zlib compression library. It allows you to compress and decompress files into a .Z format, similar to traditional UNIX compress tools.

## Features:
- Compress files to .Z format
- Decompress .Z files back to their original form
- Clean and minimal C++17 codebase
- Cross-platform support (Linux/macOS, potentially Windows with tweaks)

# Run <picture> <source srcset="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4a5/512.webp" type="image/webp"> <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4a5/512.gif" alt="💥" width="32" height="32"> </picture>
### 1. Clone the repository and navigate to the project directory:
```
git clone https://github.com/noir030/squeeze.git
cd squeeze
```
### 2. Create a directory for the build and go to it:
```
mkdir build
cd build
```
### 3. Compile the project with CMake:
```
cmake ..
make
```
### 4. Run the program:
To compress a file:
```
./squeeze a <filename>
```
To decompress a .Z file:
```
./squeeze a <filename>.Z
```

> [!NOTE]  
> The input file must be located in the `build/` directory.


## Enjoy your use <picture> <source srcset="https://fonts.gstatic.com/s/e/notoemoji/latest/1f98d/512.webp" type="image/webp"> <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f98d/512.gif" alt="🦍" width="32" height="32"> </picture>
