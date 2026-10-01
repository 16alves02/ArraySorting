# 🔢 ArraySorting

> **Sorting fundamentals, one algorithm at a time.**

[![C](https://img.shields.io/badge/C-Programming%20Language-A8B9CC?style=flat-square&logo=c&logoColor=111111)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Algorithms](https://img.shields.io/badge/Focus-Sorting%20Algorithms-111111?style=flat-square)](https://en.wikipedia.org/wiki/Sorting_algorithm)
[![Copyright](https://img.shields.io/badge/Code-Proprietary-111111?style=flat-square)](LICENSE)

## 📌 About

**ArraySorting** is a small interactive console application written in **C** to explore how classic sorting algorithms work.

The project works with integer arrays and exposes the sorting logic directly through a simple terminal menu. Instead of hiding the work behind library functions, each algorithm is implemented explicitly so its behaviour can be read, compiled and studied.

The project dates back to **2023** and was later revisited with clearer documentation and bilingual code comments.

## 🎯 What the Program Does

When the program starts, it presents a menu with four sorting options:

1. **Selection Sort**
2. **Insertion Sort**
3. **Bubble Sort**
4. **Bogo Sort**
5. Exit

For the first three algorithms, the program asks the user for **10 integers**, displays the original array and then prints the result in ascending order.

Bogo Sort uses a small fixed demonstration array and repeatedly shuffles it until it becomes sorted.

## 🧠 Algorithms

### Selection Sort

Searches the unsorted portion of the array for the smallest value and moves it into its correct position.

### Insertion Sort

Builds the sorted portion of the array one element at a time, inserting each value into its appropriate position.

### Bubble Sort

Repeatedly compares neighbouring values and swaps them when they are in the wrong order.

### Bogo Sort

Randomly shuffles the array until it happens to be sorted.

> ⚠️ Bogo Sort is intentionally inefficient and is included for educational demonstration only.

## 🏗️ Program Structure

The application keeps the implementation deliberately small and focused.

| Function | Responsibility |
| --- | --- |
| `Menu()` | Displays the main menu |
| `ReadArray()` | Reads the 10 input values |
| `WriteArray()` | Prints an array |
| `SelectionSort()` | Implements Selection Sort |
| `InsertionSort()` | Implements Insertion Sort |
| `BubbleSort()` | Implements Bubble Sort |
| `IsSorted()` | Checks whether an array is sorted |
| `Shuffle()` | Randomly rearranges an array |
| `BogoSort()` | Demonstrates Bogo Sort |
| `ExitProgram()` | Closes the application |

The program uses a fixed limit of **10 integers** for the main sorting flow.

## 💻 Example

```text
+------------------------------------+
|           ARRAY SORTING            |
|------------------------------------|
| 1 - Selection Sort                 |
| 2 - Insertion Sort                 |
| 3 - Bubble Sort                    |
| 4 - Bogo Sort                      |
|                                    |
| 0 - Exit Program                   |
+------------------------------------+

Enter your choice: 1

Selection Sort
Enter 10 numbers:
0: 5
1: 2
2: 9
...

Ascending Order:
2 5 9 ...
```

## 🛠️ Tech Stack

- C
- Standard C library
- Console input/output

No external packages or frameworks are required.

## 🚀 Getting Started

### Requirements

Any C compiler capable of compiling a standard C source file, such as:

- GCC
- Clang
- MinGW
- Visual Studio C compiler

### Clone

```bash
git clone https://github.com/16alves02/ArraySorting.git
cd ArraySorting
```

### Compile with GCC

```bash
gcc "Array Sorting.c" -o ArraySorting
```

### Run

Linux/macOS:

```bash
./ArraySorting
```

Windows:

```bash
ArraySorting.exe
```

## 📚 Why This Project Matters

ArraySorting is one of the earliest projects in the **16alves02** portfolio. It represents the more fundamental side of software development: understanding algorithms, arrays, loops, functions, input/output and program flow before moving into larger application architectures.

## 🗓️ Project History

- **2023** - Original project created and published.
- **2026** - Code comments, formatting and documentation were revisited.
- **2026** - README and project copyright information were refreshed.

## 👤 Author

**Leonardo Alves - [@16alves02](https://github.com/16alves02)**

## 📜 License & Copyright

**Copyright (c) 2023-2026 Leonardo Alves (16alves02). All rights reserved.**

This project is **not open source**. The source code is published for viewing and educational reference, but it may not be copied, redistributed, modified for public or commercial use, sublicensed, sold, or presented as someone else's work without prior written permission.

See the [LICENSE](./LICENSE) file for the full terms.
