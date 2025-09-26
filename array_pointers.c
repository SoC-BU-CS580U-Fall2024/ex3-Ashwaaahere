#include <stdio.h>

int main() {
    int n, i;
    
    // Get number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare array
    int arr[n];
    int *ptr = arr; // Pointer pointing to first element of array
    
    // Input elements using pointer
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i); // Using pointer arithmetic
    }
    
    // Print elements using pointer
    printf("\nElements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i)); // Using pointer arithmetic
    }
    
    // Alternative way to print using pointer
    printf("\nElements using pointer traversal:\n");
    ptr = arr; // Reset pointer to beginning
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr++; // Move pointer to next element
    }
    
    return 0;
}
