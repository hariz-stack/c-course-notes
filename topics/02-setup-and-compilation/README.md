# VS Code Setup & Compilers

## VS Code Setup (High Level)

1. Install VS Code
2. Add extensions:
   - C/C++ Extension Pack
   - Code Runner
3. Configure Code Runner:
   - Clear previous output
   - Save file before run
   - Run in Terminal (needed for input)

## Compilers (gcc/clang)

A **compiler** turns C source code into machine code (an executable).

### Common Setup by OS

- **Windows:** `gcc` via MSYS2/MinGW
- **macOS:** `clang` via Xcode tools
- **Linux:** `gcc`

## Check Compiler Version

```bash
gcc --version
clang --version
```

## Compile and Run

```bash
# Compile
gcc -o program program.c

# Run
./program    # Linux/Mac
program.exe  # Windows
```
