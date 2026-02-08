# C++ Workshop

A 2-hour introduction to C++ for programmers familiar with Python.

## Overview

This hands-on workshop introduces C++ fundamentals through practical exercises and culminates in creating beautiful mathematical art. Designed for Python programmers, this tutorial bridges the gap between interpreted and compiled languages while highlighting C++'s performance advantages.

## What You'll Learn

- **Compiled vs Interpreted Languages**: Understand how C++ differs from Python in execution model and performance
- **The Build Cycle**: Learn to compile and run C++ programs using g++ or clang++
- **Variables and Types**: Work with static typing, integers, doubles, and characters
- **Control Flow**: Implement loops to iterate and process data
- **File I/O**: Write output to files, specifically generating SVG graphics
- **Working with Vectors**: Manage collections of data efficiently
- **Mathematical Computing**: Apply trigonometric functions to create visual patterns
- **Performance Comparison**: See how C++ execution speed compares to Python

## The De Jong Attractor

By the end of this workshop, you'll generate mathematical art using C++:

![Classic Attractor](images/dejong_attractor_example.png)

![Butterfly Attractor](images/dejong_butterfly.png)

These images are created by iterating simple equations thousands of times and plotting each point. The De Jong attractor uses the equations:
```
x_new = sin(a * y) - cos(b * x)
y_new = sin(c * x) - cos(d * y)
```

By varying the parameters (a, b, c, d), you can create an infinite variety of beautiful patterns.

## Prerequisites

**Required Knowledge:**
- Basic programming experience (preferably Python)
- Familiarity with variables, loops, and functions
- Basic understanding of command-line interfaces

**Required Software:**
- A C++ compiler (g++ or clang++)
- A text editor or IDE
- A web browser (to view SVG output)

**Optional but Helpful:**
- Understanding of basic trigonometry
- Experience with file I/O in any language

## Workshop Structure

The tutorial is organized into progressive modules, each building on the previous:

### Module 1: First Program (03_first_program)
- **hello.cpp**: Write your first C++ program from scratch
- **broken.cpp**: Debug a program with compilation errors
- Learn the basic structure of a C++ program
- Understand the compilation process

### Module 2: Types, Loops, and Files (04_types_loops_files)
- **variables.cpp**: Practice declaring variables with different types
- **for_loop.cpp**: Implement iteration with for loops
- **file_output.cpp**: Write data to files
- Understand static typing and type safety

### Module 3: De Jong Attractor (05_de_jong_attractor)
- **math_example.cpp**: Work with mathematical functions (sin, cos)
- **svg_intro.cpp**: Learn the basics of SVG graphics
- **attractor_starter.cpp**: Build the complete De Jong attractor visualization
- Generate your first mathematical art piece

### Module 4: Performance and Memory (06_performance_memory)
- **attractor.py**: Python implementation for comparison
- **timed_attractor.cpp**: Optimized C++ version with timing
- Compare execution speeds between Python and C++
- Understand when C++ provides significant performance benefits

## Getting Started

### Option 1: GitHub Codespaces (Recommended)

We'll complete the exercises using GitHub Codespaces, which provides a ready-to-use development environment in your browser.

1. Click the green **Code** button at the top of this repository
2. Select the **Codespaces** tab
3. Click **Create codespace on main**

Once your Codespace loads, you'll have a full VS Code editor with g++ already installed. Then follow along with the workshop materials.

### Option 2: Local Setup

If you prefer to work locally:

1. Clone this repository:
   ```bash
   git clone https://github.com/janash/intro-cpp-tutorial.git
   cd intro-cpp-tutorial
   ```

2. Verify you have a C++ compiler:
   ```bash
   g++ --version
   # or
   clang++ --version
   ```

3. Install a compiler if needed:
   - **Linux**: `sudo apt install g++` (Ubuntu/Debian) or `sudo dnf install gcc-c++` (Fedora)
   - **macOS**: Install Xcode Command Line Tools: `xcode-select --install`
   - **Windows**: Install MinGW-w64 or use WSL with Linux instructions

## How to Use This Repository

Each module contains C++ source files (`.cpp`) with exercises:

1. **Navigate** to a module directory:
   ```bash
   cd 03_first_program
   ```

2. **Edit** the `.cpp` file in your text editor

3. **Compile** your program:
   ```bash
   g++ filename.cpp -o filename
   ```

4. **Run** the compiled program:
   ```bash
   ./filename
   ```

5. **View** SVG output files in your web browser (for graphics exercises)

## Troubleshooting

### Compilation Errors

**Error: `iostream: No such file or directory`**
- Make sure you have `#include <iostream>` at the top of your file

**Error: `'cout' is not a member of 'std'`**
- Use `std::cout` or add `using namespace std;` after includes

**Error: Missing semicolon**
- C++ requires semicolons at the end of statements
- Check the line number in the error message

### Runtime Issues

**Program compiles but doesn't run**
- On Linux/Mac, make sure you include `./` before the program name
- Check that the file is executable: `chmod +x filename`

**SVG file doesn't display correctly**
- Make sure the SVG tags are properly closed
- Verify the file was written completely (check file size)
- Try opening in a different browser

**Math functions not working**
- Include `<cmath>` header at the top of your file
- Make sure you're using `std::sin()` and `std::cos()` or `using namespace std;`

## Tips for Success

- **Start Simple**: Make sure each small piece works before moving to the next
- **Compile Often**: Compile after every few changes to catch errors early
- **Read Error Messages**: C++ compiler errors can be verbose, but they usually point to the exact line with the problem
- **Experiment**: Try changing parameters in the attractor to create different patterns
- **Ask Questions**: If you get stuck, don't hesitate to ask for help

## Beyond This Workshop

### Next Steps
- **Learn Modern C++**: Explore C++11, C++14, C++17, and C++20 features
- **Study Data Structures**: Implement linked lists, trees, and hash tables
- **Explore STL**: Master the Standard Template Library (vectors, maps, algorithms)
- **Object-Oriented Programming**: Learn classes, inheritance, and polymorphism
- **Advanced Topics**: Smart pointers, move semantics, templates, and metaprogramming

### Recommended Resources
- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [learncpp.com](https://www.learncpp.com/) - Free, detailed C++ tutorial
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/) - Best practices
- [Compiler Explorer (godbolt.org)](https://godbolt.org/) - See how C++ compiles to assembly

### Related Projects
- Try implementing other attractors (Lorenz, Rössler)
- Build interactive visualizations with SDL or SFML
- Explore computational science with C++
- Learn graphics programming with OpenGL or Vulkan

## Contributing

Found a typo or have a suggestion? Contributions are welcome!

1. Fork the repository
2. Create a feature branch (`git checkout -b improve-tutorial`)
3. Make your changes
4. Commit your changes (`git commit -am 'Add helpful explanation'`)
5. Push to the branch (`git push origin improve-tutorial`)
6. Create a Pull Request

## License

This project is available for educational use. Please see the repository for specific license terms.

## Acknowledgments

This workshop was created to introduce scientific Python programmers to C++ through hands-on visualization projects. The De Jong attractor provides an engaging way to learn core programming concepts while creating beautiful mathematical art.
