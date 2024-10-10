
//2.Program and algo to Delete an Element from an Array

#include <stdio.h>

int main() {
    int n, i, pos;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos > n || pos < 1) {
        printf("Invalid Input\n");
    } else {
        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrement the size of the array

        // Print the updated array
        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
