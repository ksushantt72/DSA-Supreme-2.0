#include <stdio.h>

int findTargetIndex(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        int curr = arr[i];
        if (curr > target) {
            return i;
        }
    }
    // If no element is greater than target, return the size of the array
    return size;
}

int main() {
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    int arr[n];

    // Taking input for the array
    for (int i = 0; i < n; i++) {
        printf("Enter the value for array corresponding to index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array taken as input is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int ans = findTargetIndex(arr, target, n);
    if (ans < n) {
        printf("The index of the first element greater than the target element is: %d\n", ans);
    } else {
        printf("The target element was greater than each and every element, so the length of the array is: %d\n", ans);
    }

    return 0;
}
