

//Program and algo to Reverse an Array

#include <stdio.h>

int main() {
    int n, i, temp;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointers
    int start = 0;
    int end = n - 1;

    // Reverse the array
    while (start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
