#include <stdio.h>

// Function to multiply two numbers using call by reference
void multiply(int *a, int *b, int *result) {
    *result = (*a) * (*b);
}

int main() {
    int num1, num2, product;
    
    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Call function with addresses (call by reference)
    multiply(&num1, &num2, &product);
    
    // Display result
    printf("Product of %d and %d is: %d\n", num1, num2, product);
    
    return 0;
}
