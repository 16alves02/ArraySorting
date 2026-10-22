# ArraySorting

A small interactive console program in C that demonstrates classic sorting algorithms: Selection Sort, Insertion Sort, Bubble Sort and, for fun, Bogo Sort.

I built this project to understand how the algorithms behave in practice, rather than only learning their theory. The program asks for ten integers, displays the original array and then prints the sorted result, making it easy to compare the output.

## Algorithms included

| Algorithm | Main idea | Typical time complexity |
| --- | --- | --- |
| Selection Sort | Finds the smallest remaining value and places it in the next position. | O(n²) |
| Insertion Sort | Inserts each value into the correct position in the sorted part of the array. | O(n²) worst case; O(n) best case |
| Bubble Sort | Compares neighbouring values and swaps them when they are out of order. | O(n²) |
| Bogo Sort | Shuffles the array until it happens to be sorted. | Unpredictable; not suitable for practical use |

Bogo Sort is included only as a demonstration using six fixed values. Its running time is unpredictable, so it should not be used with large arrays.

## Features

- Interactive menu that keeps running until the user chooses to exit.
- Selection Sort, Insertion Sort and Bubble Sort applied to ten integers entered by the user.
- Displays the original array and the result in ascending order.
- Validates menu choices and reports non-numeric input.
- Includes a small Bogo Sort demonstration.

## Requirements

- GCC or Clang, or another compatible C compiler.
- No external libraries.

## Build and run

Clone the repository:

```bash
git clone https://github.com/16alves02/ArraySorting.git
cd ArraySorting
```

Compile with common compiler warnings enabled:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic "Array Sorting.c" -o ArraySorting
```

Run on Linux or macOS:

```bash
./ArraySorting
```

On Windows with MinGW, run:

```bash
ArraySorting.exe
```

## Manual testing checklist

There is no automated test suite yet. After changing the code, use this checklist to check the main behaviours:

- Run each of the three main algorithms with ten mixed integers.
- Try negative numbers, duplicate values, an already sorted array and a reverse-sorted array.
- Confirm each algorithm prints the values in ascending order.
- Enter a numeric menu choice outside the range 0 to 4.
- Enter text instead of a number for a menu choice or array element and confirm the program reports invalid input.
- Run Bogo Sort and confirm its six demonstration values appear in ascending order.
- Exit with option 0.

## What this project demonstrates

This project is practice with arrays, loops, functions, conditionals, input/output, swapping values, random numbers and the logic behind basic sorting algorithms. The code stays close to introductory C concepts so each function can be read and understood independently.

## Known limitations

- The three main sorting algorithms always use a fixed array of ten integers.
- Non-numeric input ends the current program run rather than prompting the user to try again.
- Bogo Sort is intentionally inefficient and is included only for demonstration.

## Author

Leonardo Alves · [@16alves02](https://github.com/16alves02) · [Portfolio](https://16alves02-com.vercel.app/)

See [LICENSE](LICENSE) for the terms under which this source code may be used.
