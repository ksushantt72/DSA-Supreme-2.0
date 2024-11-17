#include <stdio.h>
#include <stdlib.h>

// Function for Selection Sort
void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void createArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the Input for Index :- %d : ", i);
        scanf("%d", &arr[i]);
    }
}

void PrintArray(int arr[], int size) {
    printf("Printing Array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    int arr[size];
    createArray(arr, size);

    printf("Printing Before Sorting :\n");
    PrintArray(arr, size);

    SelectionSort(arr, size);

    printf("Printing After Sorting :\n");
    PrintArray(arr, size);

    return 0;
}
