#include<stdio.h>

void BubbleSort(int arr[], int size) {
    int n = size;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    PrintArray(arr, size);

    BubbleSort(arr, size);
    printf("Printing Array After the Sorting :\n");
    PrintArray(arr, size);

    return 0;
}
