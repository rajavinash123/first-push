// Program and algorithm to Insert an Element in an Array
#include <stdio.h>

int main() {
    int n, i, pos, element;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Array with one extra space for the new element

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the new element
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Check if the position is valid
    if (pos > n + 1 || pos < 1) {
        printf("Invalid Input\n");
    } else {
        // Shift elements to the right
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        // Insert the new element
        arr[pos - 1] = element;

        // Print the updated array
        printf("Array after insertion: ");
        for (i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
