#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int start, int end) {
    int mid = start + (end - start) / 2;

    int lenleft = mid - start + 1;
    int lenright = end - mid;

    // Creating Left and Right Array using Heap Memory
    int *left = (int *)malloc(lenleft * sizeof(int));
    int *right = (int *)malloc(lenright * sizeof(int));

    // Copy values from original array
    int k = start;
    for (int i = 0; i < lenleft; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < lenright; i++) {
        right[i] = arr[k];
        k++;
    }

    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = start;

    // Comparing and replacing values in the main array
    while (leftindex < lenleft && rightindex < lenright) {
        if (left[leftindex] < right[rightindex]) {
            arr[mainarrayindex] = left[leftindex];
            mainarrayindex++;
            leftindex++;
        } else {
            arr[mainarrayindex] = right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }

    // If elements remain in the left array
    while (leftindex < lenleft) {
        arr[mainarrayindex] = left[leftindex];
        mainarrayindex++;
        leftindex++;
    }

    // If elements remain in the right array
    while (rightindex < lenright) {
        arr[mainarrayindex] = right[rightindex];
        mainarrayindex++;
        rightindex++;
    }

    // Free heap memory
    free(left);
    free(right);
}

void MergeSort(int arr[], int start, int end) {
    if (start > end) {
        return;
    }
    if (start == end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Breaking into two parts
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);

    // Actual merge logic
    Merge(arr, start, end);
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

    int start = 0;
    int end = size - 1;

    printf("Before Merge Sort Printing Array\n");
    PrintArray(arr, size);

    MergeSort(arr, start, end);

    printf("After Merge Sort Printing Array\n");
    PrintArray(arr, size);

    return 0;
}
