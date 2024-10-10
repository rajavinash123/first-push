#include <stdio.h>

void segregateEvenOdd(int arr[], int n) {
    int even[n], odd[n];
    int i, j = 0, k = 0;

    // Separate even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];
        } else {
            odd[k++] = arr[i];
        }
    }

    // Combine even and odd numbers
    for (i = 0; i < j; i++) {
        arr[i] = even[i];
    }
    for (i = 0; i < k; i++) {
        arr[j + i] = odd[i];
    }
}

int main() {
    int n, i;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Segregate even and odd numbers
    segregateEvenOdd(arr, n);

    // Print the segregated array
    printf("Segregated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
