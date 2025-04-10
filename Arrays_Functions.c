#include <stdio.h>
int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    // Check for valid size
    if (size <= 0) {
        printf("Size must be a positive integer.\n");
        return 1; // Exit with an error code
    }
    int arr[size];
    printf("Enter the values:\n");
    for (int i = 0; i < size; i++) { // Changed to i < size
        scanf("%d", &arr[i]); // Added & to arr[i]
    }
    int largest = findLargest(arr, size);
    printf("The largest number in the array is: %d\n", largest);
    return 0;
}