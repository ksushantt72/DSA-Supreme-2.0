#include<stdio.h>

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[], int size) {
    int n = size;
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;  // Insertion
    }
}

void createArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the Input for Index :- %d : ", i);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int size;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);
    int arr[size];
    createArray(arr, size);
    PrintArray(arr, size);
    InsertionSort(arr, size);
    printf("Printing the Array after Insertion Sort\n");
    PrintArray(arr, size);
    return 0;
}
