#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, answer;
    char op;

    printf("Enter first number:\n");
    scanf("%lf", &a);  // read a double

    printf("Enter operation (+, -, *, /):\n");
    scanf(" %c", &op); // read the operator

    printf("Enter second number:\n");
    scanf("%lf", &b);  // read the second number

    if (op == '+') {
        answer = a + b;
    } else if (op == '-') {
        answer = a - b;
    } else if (op == '*') {
        answer = a * b;
    } else if (op == '/') {
        answer = a / b;
    } else {
        printf("Invalid operator!\n");
        return 1;
    }

    printf("Answer: %lf\n", answer);
    return 0;
}