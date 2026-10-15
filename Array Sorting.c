#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { LIMIT = 10 };

void Menu(void) {
    printf("\n"
           "+------------------------------------+\n"
           "|           ARRAY SORTING            |\n"
           "|------------------------------------|\n"
           "| 1 - Selection Sort                 |\n"
           "| 2 - Insertion Sort                 |\n"
           "| 3 - Bubble Sort                    |\n"
           "| 4 - Bogo Sort                      |\n"
           "|                                    |\n"
           "| 0 - Exit Program                   |\n"
           "+------------------------------------+\n");
}

bool ReadArray(int numbers[LIMIT]) {
    printf("Enter %d integers:\n", LIMIT);

    for (int i = 0; i < LIMIT; i++) {
        printf("  %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter whole numbers only.\n");
            return false;
        }
    }

    return true;
}

void WriteArray(const int numbers[LIMIT]) {
    for (int i = 0; i < LIMIT; i++) {
        printf("%d%s", numbers[i], i == LIMIT - 1 ? "\n" : "\t");
    }
}

void SelectionSort(int numbers[LIMIT]) {
    for (int i = 0; i < LIMIT - 1; i++) {
        int smallest = i;

        for (int j = i + 1; j < LIMIT; j++) {
            if (numbers[j] < numbers[smallest]) {
                smallest = j;
            }
        }

        if (smallest != i) {
            int temp = numbers[i];
            numbers[i] = numbers[smallest];
            numbers[smallest] = temp;
        }
    }
}

void InsertionSort(int numbers[LIMIT]) {
    for (int i = 1; i < LIMIT; i++) {
        int value = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > value) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = value;
    }
}

void BubbleSort(int numbers[LIMIT]) {
    for (int i = 0; i < LIMIT - 1; i++) {
        for (int j = 0; j < LIMIT - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

bool IsSorted(const int numbers[], int size) {
    for (int i = 1; i < size; i++) {
        if (numbers[i - 1] > numbers[i]) {
            return false;
        }
    }

    return true;
}

void Shuffle(int numbers[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
}

void BogoSort(int numbers[], int size) {
    while (!IsSorted(numbers, size)) {
        Shuffle(numbers, size);
    }
}

bool RunSort(const char *name, void (*sortFunction)(int[LIMIT])) {
    int numbers[LIMIT];

    printf("\n%s\n", name);

    if (!ReadArray(numbers)) {
        return false;
    }

    printf("\nOriginal array:\n");
    WriteArray(numbers);

    sortFunction(numbers);

    printf("\nSorted array (ascending):\n");
    WriteArray(numbers);
    return true;
}

int main(void) {
    int choice;

    srand((unsigned int)time(NULL));

    while (true) {
        Menu();
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid menu input. Please restart and enter a number.\n");
            return 1;
        }

        switch (choice) {
            case 0:
                printf("Program closed. Goodbye!\n");
                return 0;

            case 1:
                if (!RunSort("Selection Sort", SelectionSort)) {
                    return 1;
                }
                break;

            case 2:
                if (!RunSort("Insertion Sort", InsertionSort)) {
                    return 1;
                }
                break;

            case 3:
                if (!RunSort("Bubble Sort", BubbleSort)) {
                    return 1;
                }
                break;

            case 4: {
                int demoNumbers[] = {1, 10, 9, 7, 3, 0};
                int size = (int)(sizeof(demoNumbers) / sizeof(demoNumbers[0]));

                BogoSort(demoNumbers, size);

                printf("\nBogo Sort result:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d%s", demoNumbers[i], i == size - 1 ? "\n" : " ");
                }
                break;
            }

            default:
                printf("Invalid choice. Choose a number from 0 to 4.\n");
                break;
        }
    }
}
