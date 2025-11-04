#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortArray(int* arr, int n) {
    int swapped;
    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    srand((unsigned)time(NULL));
    int n;
    printf("Введите размер списка: ");
    scanf("%d", &n);

    int* numbers = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        numbers[i] = rand() % 100;

    printf("\nИсходный список: ");
    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);

    sortArray(numbers, n);

    printf("\nСписок после сортировки: ");
    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);

    free(numbers);
    return 0;
}
