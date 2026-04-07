#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // TODO: Implement switch statement to handle operations
    
    return 0;
}