#include <stdio.h>
#include <string.h>

// Function to swap characters using pointers
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate permutations using pointers
void generatePermutations(char *str, int start, int end) {
    if (start == end) {
        // Print the permutation
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            // Swap characters using pointers
            swap(str + start, str + i);
            
            // Recursively generate permutations for remaining characters
            generatePermutations(str, start + 1, end);
            
            // Backtrack: restore original order
            swap(str + start, str + i);
        }
    }
}

int main() {
    char str[] = "HMAli";
    int n = strlen(str);
    
    printf("All permutations of '%s' are:\n", str);
    printf("================================\n");
    
    // Generate all permutations using pointers
    generatePermutations(str, 0, n - 1);
    
    printf("\nTotal number of permutations: %d\n", n * (n - 1) * (n - 2) * (n - 3) * (n - 4));
    
    return 0;
}
