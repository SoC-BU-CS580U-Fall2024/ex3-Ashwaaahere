#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptr_sum;
    
    // Initialize pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr_sum = &sum;
    
    // Get input from user
    printf("Enter first number: ");
    scanf("%d", ptr1);
    
    printf("Enter second number: ");
    scanf("%d", ptr2);
    
    // Add using pointers
    *ptr_sum = *ptr1 + *ptr2;
    
    // Display result
    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptr_sum);
    
    return 0;
}
