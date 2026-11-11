#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

enum { LIMIT = 10 };

void SelectionSort(int numbers[LIMIT]);
void InsertionSort(int numbers[LIMIT]);
void BubbleSort(int numbers[LIMIT]);
bool IsSorted(const int numbers[], int size);
void Shuffle(int numbers[], int size);

typedef void (*SortFunction)(int numbers[LIMIT]);

static void assert_array_equal(const int actual[LIMIT], const int expected[LIMIT]) {
    for (int i = 0; i < LIMIT; i++) {
        assert(actual[i] == expected[i]);
    }
}

static void test_sort(SortFunction sort, const char *name) {
    const int input[LIMIT] = {7, -4, 0, 2, -1, 9, 3, 3, 1, 5};
    const int expected[LIMIT] = {-4, -1, 0, 1, 2, 3, 3, 5, 7, 9};
    int actual[LIMIT];

    for (int i = 0; i < LIMIT; i++) {
        actual[i] = input[i];
    }

    sort(actual);
    assert_array_equal(actual, expected);
    assert(IsSorted(actual, LIMIT));
    printf("PASS: %s sorts mixed values, negatives and duplicates\n", name);
}

static void test_already_sorted(SortFunction sort, const char *name) {
    const int expected[LIMIT] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
    int actual[LIMIT];

    for (int i = 0; i < LIMIT; i++) {
        actual[i] = expected[i];
    }

    sort(actual);
    assert_array_equal(actual, expected);
    printf("PASS: %s keeps an already sorted array\n", name);
}

static void test_reverse_sorted(SortFunction sort, const char *name) {
    const int expected[LIMIT] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
    int actual[LIMIT];

    for (int i = 0; i < LIMIT; i++) {
        actual[i] = expected[LIMIT - 1 - i];
    }

    sort(actual);
    assert_array_equal(actual, expected);
    printf("PASS: %s sorts a reverse-ordered array\n", name);
}

static void test_is_sorted(void) {
    const int sorted[] = {-2, 0, 0, 7};
    const int unsorted[] = {-2, 3, 1, 7};

    assert(IsSorted(sorted, 4));
    assert(!IsSorted(unsorted, 4));
    assert(IsSorted(NULL, 0));
    printf("PASS: IsSorted handles sorted, unsorted and empty arrays\n");
}

static void test_shuffle_preserves_values(void) {
    int values[] = {1, 2, 3, 4, 5, 6};
    bool seen[7] = {false};

    Shuffle(values, 6);

    for (int i = 0; i < 6; i++) {
        assert(values[i] >= 1 && values[i] <= 6);
        assert(!seen[values[i]]);
        seen[values[i]] = true;
    }

    printf("PASS: Shuffle preserves every value exactly once\n");
}

int main(void) {
    test_sort(SelectionSort, "Selection Sort");
    test_sort(InsertionSort, "Insertion Sort");
    test_sort(BubbleSort, "Bubble Sort");

    test_already_sorted(SelectionSort, "Selection Sort");
    test_already_sorted(InsertionSort, "Insertion Sort");
    test_already_sorted(BubbleSort, "Bubble Sort");

    test_reverse_sorted(SelectionSort, "Selection Sort");
    test_reverse_sorted(InsertionSort, "Insertion Sort");
    test_reverse_sorted(BubbleSort, "Bubble Sort");

    test_is_sorted();
    test_shuffle_preserves_values();

    puts("All sorting tests passed.");
    return 0;
}
