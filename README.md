# ArraySorting

A small interactive console program in C for learning how classic sorting algorithms work. The code implements each algorithm directly and prints the original and sorted arrays so the steps are easy to inspect.

## Algorithms

| Algorithm | Main idea | Typical time complexity |
| --- | --- | --- |
| Selection Sort | Find the smallest remaining value and put it in the next position. | O(n²) |
| Insertion Sort | Insert each value into the correct position in the sorted part. | O(n²) worst case; O(n) best case |
| Bubble Sort | Compare neighbouring values and swap them when they are out of order. | O(n²) |
| Bogo Sort | Shuffle values until the array happens to be sorted. | Unpredictable; not suitable for real data |

Bogo Sort is included only as a small demonstration using six fixed values. Its running time is unpredictable, so it should not be used with large arrays.

## Features

- Menu-driven console interface that keeps running until the user exits.
- Selection Sort, Insertion Sort and Bubble Sort run on ten integers entered by the user.
- Shows the original array and the ascending result.
- Checks menu input and reports non-numeric values in the sorting input.
- Includes a small Bogo Sort demonstration.

## Requirements

A C compiler such as GCC or Clang. No external libraries are needed.

## Build and run

Clone the repository:

```bash
git clone https://github.com/16alves02/ArraySorting.git
cd ArraySorting
```

Compile with warnings enabled:

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

## Manual test checklist

- Run each of the three main sorting algorithms with ten mixed integers.
- Try negative numbers, duplicate values, an already sorted list and a reverse-sorted list.
- Confirm every algorithm prints the values in ascending order.
- Enter a menu choice outside the range 0 to 4.
- Enter a non-numeric value for a menu choice or array element and confirm the program reports invalid input.
- Run Bogo Sort and confirm its six demonstration values appear in ascending order.
- Exit with option 0.

## What this project demonstrates

This project practises arrays, loops, functions, conditional statements, input/output, swapping values, random numbers and the logic behind basic sorting algorithms. The implementation stays close to introductory C concepts so each function can be studied independently.

## Limitations

- The three main sorting algorithms use a fixed array of ten integers.
- Invalid numeric input ends the current program run rather than prompting again.
- Bogo Sort is intentionally inefficient and is only intended as a demonstration.

## Author

Leonardo Alves · [@16alves02](https://github.com/16alves02) · [Portfolio](https://16alves02-com.vercel.app/)

See [LICENSE](LICENSE) for the terms under which this source code may be used.
