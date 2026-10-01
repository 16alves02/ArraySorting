# 🔢 ArraySorting

> A C console application for exploring classic array sorting algorithms.

[![C](https://img.shields.io/badge/C-Programming%20Language-A8B9CC?style=flat-square&logo=c&logoColor=111111)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Algorithms](https://img.shields.io/badge/Focus-Algorithms-111111?style=flat-square)](https://en.wikipedia.org/wiki/Sorting_algorithm)

## Overview

**ArraySorting** is a small interactive C program that demonstrates several classic sorting algorithms through a console-based menu.

The project is intentionally simple and educational. Instead of hiding the sorting process behind a library function, it keeps the algorithms visible so their logic can be studied and compared.

## 🎯 Why I Built It

The project was created as a practical exercise in programming fundamentals and algorithmic thinking.

It helped me work with:

- Arrays
- Loops and conditionals
- Functions
- User input and output
- Menu-driven programs
- Algorithm implementation
- Checking whether data is sorted

The goal is to understand the mechanics behind sorting rather than simply using a ready-made function.

## 🧠 Algorithms

### Selection Sort

Repeatedly finds the smallest element in the unsorted portion of the array and places it in the correct position.

### Insertion Sort

Builds the sorted portion of the array one element at a time by inserting each new value into its appropriate position.

### Bubble Sort

Repeatedly compares neighbouring elements and swaps them when they are in the wrong order.

### Bogo Sort

Included as an intentionally inefficient educational example. It repeatedly shuffles the array until it happens to be sorted.

> Bogo Sort is included for demonstration only and should not be used for practical sorting.

## ⚙️ How It Works

The program provides an interactive console flow where the user can work with an array and choose a sorting algorithm.

At a high level:

```text
Create / load array
       ↓
Choose sorting algorithm
       ↓
Run algorithm
       ↓
Display result
       ↓
Check sorted state
```

## 🛠️ Tech Stack

- C
- Standard C library
- Console input/output

No external dependencies are required.

## 🚀 Getting Started

### Requirements

A C compiler such as:

- GCC
- Clang
- MinGW
- Visual Studio C compiler

### Clone

```bash
git clone https://github.com/16alves02/ArraySorting.git
cd ArraySorting
```

### Compile

For GCC:

```bash
gcc *.c -o ArraySorting
```

### Run

On Linux or macOS:

```bash
./ArraySorting
```

On Windows:

```bash
ArraySorting.exe
```

## 📚 What This Project Represents

ArraySorting is one of the smaller projects in the **16alves02** portfolio, but it represents an important part of learning software development: understanding the fundamentals before building on top of abstractions.

## 👤 Author

**Leonardo Alves - [@16alves02](https://github.com/16alves02)**

Part of the **16alves02** project portfolio.
## 📜 License & Copyright

**Copyright (c) 2026 Leonardo Alves (16alves02). All rights reserved.**

This project is **not open source**. The source code is published for viewing and educational reference, but it may not be copied, redistributed, modified for public or commercial use, sublicensed, sold, or presented as someone else's work without prior written permission.

See the [LICENSE](./LICENSE) file for the full terms.
