#include <stdio.h>

// Function to alter the contents of two variables through pointers
void alterContents(int *ptr1, int *ptr2) {
    // Modify the contents of the variables using pointers
    (*ptr1) += 5;
    (*ptr2) *= 2;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display the original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to alter the contents
    alterContents(&num1, &num2);

    // Display the modified values
    printf("Modified values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
