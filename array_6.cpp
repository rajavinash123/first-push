//6.Program and algo to Find the Second Largest Element in an Array

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i, max1, max2;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2 to the minimum possible integer value
    max1 = max2 = INT_MIN;

    // Iterate through the array to find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    // Print the largest and second largest elements
    printf("Largest element = %d\n", max1);
    printf("Second largest element = %d\n", max2);

    return 0;
}
