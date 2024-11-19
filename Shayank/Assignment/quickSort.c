#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Creating a function for partition of the Array
int partition(int arr[], int low, int high) {
    // Choosing the last element of array as the pivot element
    int pivot = arr[high]; 
    // Index of the smaller element
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot then swapping
        if (arr[j] <= pivot) {
            //Index Increment
            i++;
            // Swap arr[i] and arr[j]
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    // Return the partition index
    return i + 1;                  
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // sortting elements before and after partition using recursion
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // Taking Input in Array from the user
    printf("Taking Input From the User:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the Element for Index -> %d, ",i);
        scanf("%d", &arr[i]);
    }
    //Printing the Array before Sorting for comparison
    printf("unSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    //QuickSOrt Function Calling
    quickSort(arr, 0, n - 1);

    //Printing the Array After Sorting
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
