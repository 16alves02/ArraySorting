#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int Limit = 10;

/*
    PT: Menu principal do programa. Apenas trata da apresentação.
    EN: Main menu of the program. Only handles the visual layout.
*/
void Menu() {
    printf("\n"
           "\t+------------------------------------+\n"
           "\t|           ARRAY SORTING            |\n"
           "\t|------------------------------------|\n"
           "\t| 1 - Selection Sort                 |\n"
           "\t| 2 - Insertion Sort                 |\n"
           "\t| 3 - Bubble Sort                    |\n"
           "\t| 4 - Bogo Sort                      |\n"
           "\t|                                    |\n"
           "\t| 0 - Exit Program                   |\n"
           "\t+------------------------------------+\n");
}

/*
    PT: Lê 10 números do utilizador e guarda-os no array.
    EN: Reads 10 numbers from the user and stores them in the array.
*/
void ReadArray(int a[Limit]) {
    printf("Enter %d numbers:\n", Limit);
    for (int i = 0; i < Limit; i++) {
        printf("  %d: ", i);
        scanf("%d", &a[i]);
    }
}

/*
    PT: Escreve o array no ecrã.
    EN: Prints the array to the screen.
*/
void WriteArray(int a[Limit]) {
    for (int i = 0; i < Limit; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

/*
    PT: Selection Sort — procura sempre o menor elemento e coloca-o na posição correta.
    EN: Selection Sort — always finds the smallest element and places it in the correct position.
*/
void SelectionSort(int a[Limit]) {
    int c, d, position, t;

    for (c = 0; c < Limit - 1; c++) {
        position = c;

        for (d = c + 1; d < Limit; d++) {
            if (a[position] > a[d])
                position = d;
        }

        // PT: Troca se encontrou um valor mais pequeno.
        // EN: Swaps if a smaller value was found.
        if (position != c) {
            t = a[c];
            a[c] = a[position];
            a[position] = t;
        }
    }
}

/*
    PT: Insertion Sort — insere cada elemento na posição correta da parte já ordenada.
    EN: Insertion Sort — inserts each element into the correct position of the sorted section.
*/
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

/*
    PT: Bubble Sort — compara pares consecutivos e troca se estiverem fora de ordem.
    EN: Bubble Sort — compares adjacent pairs and swaps them if they are out of order.
*/
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

/*
    PT: Verifica se o array está ordenado (usado no BogoSort).
    EN: Checks if the array is sorted (used by BogoSort).
*/
bool IsSorted(int *a, int n) {
    while (--n >= 1) {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

/*
    PT: Baralha o array aleatoriamente.
    EN: Randomly shuffles the array.
*/
void Shuffle(int *a, int n) {
    int i, t, r;
    for (i = 0; i < n; i++) {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}

/*
    PT: BogoSort — baralha até ficar ordenado (muito ineficiente).
    EN: BogoSort — shuffles until sorted (extremely inefficient).
*/
void BogoSort(int *a, int n) {
    while (!IsSorted(a, n))
        Shuffle(a, n);
}

/*
    PT: Fecha o programa de forma limpa.
    EN: Closes the program cleanly.
*/
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
        printf("\nYour Choice:\n");
        WriteArray(a1);
        SelectionSort(a1);
        printf("\nAscending Order:\n");
        WriteArray(a1);
        break;

    case 2:
        printf("\nInsertion Sort\n");
        ReadArray(a1);
        printf("\nYour Choice:\n");
        WriteArray(a1);
        InsertionSort(a1);
        printf("\nAscending Order:\n");
        WriteArray(a1);
        break;

    case 3:
        printf("\n\nBubble Sort\n");
        ReadArray(a1);
        printf("\nYour Choice:\n");
        WriteArray(a1);
        BubbleSort(a1);
        printf("\nAscending Order:\n");
        WriteArray(a1);
        break;

    case 4:
        // PT: Exemplo fixo para demonstrar o BogoSort.
        // EN: Fixed example to demonstrate BogoSort.
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
