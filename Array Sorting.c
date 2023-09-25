#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int Limit = 10;

void Menu() {
    printf("\n"
           "\t+------------------------------------+\n"
           "\t|          Array Sorting             |\n"
           "\t|                                    |\n"
           "\t| 1 - Selection Sort                |\n"
           "\t| 2 - Insertion Sort                |\n"
           "\t| 3 - Bubble Sort                  |\n"
           "\t| 4 - Bogo Sort                    |\n"
           "\t|                                    |\n"
           "\t| 0 - Exit Program                 |\n"
           "\t|                                    |\n"
           "\t+------------------------------------+\n");
}

void ReadArray(int a[Limit]) {
    printf("Enter %d numbers:\n", Limit);
    for (int i = 0; i < Limit; i++) {
        printf("  %d: ", i);
        scanf("%d", &a[i]);
    }
}

void WriteArray(int a[Limit]) {
    for (int i = 0; i < Limit; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void SelectionSort(int a[Limit]) {
    int c, d, position, t;

    for (c = 0; c < (Limit - 1); c++) {
        position = c;

        for (d = c + 1; d < Limit; d++) {
            if (a[position] > a[d])
                position = d;
        }
        if (position != c) {
            t = a[c];
            a[c] = a[position];
            a[position] = t;
        }
    }
}

void InsertionSort(int a[Limit]) {
    int c, d, t, flag = 0;

    for (c = 1; c < Limit; c++) {
        t = a[c];

        for (d = c - 1; d >= 0; d--) {
            if (a[d] > t) {
                a[d + 1] = a[d];
                flag = 1;
            } else
                break;
        }
        if (flag)
            a[d + 1] = t;
    }
}

void BubbleSort(int a[Limit]) {
    int c, d, swap;

    for (c = 0; c < Limit - 1; c++) {
        for (d = 0; d < Limit - c - 1; d++) {
            if (a[d] > a[d + 1]) {
                swap = a[d];
                a[d] = a[d + 1];
                a[d + 1] = swap;
            }
        }
    }
}

bool IsSorted(int *a, int n) {
    while (--n >= 1) {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

void Shuffle(int *a, int n) {
    int i, t, r;
    for (i = 0; i < n; i++) {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}

void BogoSort(int *a, int n) {
    while (!IsSorted(a, n))
        Shuffle(a, n);
}

void ExitProgram() {
    printf("Your program has been closed. Goodbye!\n");
    exit(0);
}

int main() {
    int a1[Limit];
    int Choice;
    Menu();
    printf("Enter your choice: ");
    scanf("%d", &Choice);

    switch (Choice) {

    case 0:
        ExitProgram();
        break;

    case 1:
        printf("\n\nSelection Sort\n");
        ReadArray(a1);
        printf("\nYour Choice: \n");
        WriteArray(a1);
        SelectionSort(a1);
        printf("\nAscending Order: \n");
        WriteArray(a1);
        break;

    case 2:
        printf("\nInsertion Sort\n");
        ReadArray(a1);
        printf("\nYour Choice: \n");
        WriteArray(a1);
        InsertionSort(a1);
        printf("\nAscending Order: \n");
        WriteArray(a1);
        break;

    case 3:
        printf("\n\nBubble Sort\n");
        ReadArray(a1);
        printf("\nYour Choice: \n");
        WriteArray(a1);
        BubbleSort(a1);
        printf("\nAscending Order: \n");
        WriteArray(a1);
        break;

    case 4:
        int numbers[] = {1, 10, 9, 7, 3, 0};
        int i;

        BogoSort(numbers, 6);
        printf("\nBogo Sort Result: ");
        for (i = 0; i < 6; i++)
            printf("%d ", numbers[i]);
        printf("\n");
        break;
    }

    return 0;
}
