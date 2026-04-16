#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int isEven(int num);
int factorial(int n);
int isPrime(int num);

int main() {
    int choice;
    int a, b, num, n;
    int res_int;
    float res_float;
    int i;

    choice = 0;

    while (choice != 8) {
        printf("\n-------------------------------------------\n");
        printf("          MY CALCULATOR PROGRAM            \n");
        printf("-------------------------------------------\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Check Even/Odd\n");
        printf("6. Find Factorial\n");
        printf("7. Check Prime\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            res_int = add(a, b);
            printf("Result: %d + %d = %d\n", a, b, res_int);
        }
        else if (choice == 2) {
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            res_int = subtract(a, b);
            printf("Result: %d - %d = %d\n", a, b, res_int);
        }
        else if (choice == 3) {
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            res_int = multiply(a, b);
            printf("Result: %d * %d = %d\n", a, b, res_int);
        }
        else if (choice == 4) {
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            if (b == 0) {
                printf("Error! Cannot divide by zero.\n");
            } else {
                res_float = divide(a, b);
                printf("Result: %d / %d = %.2f\n", a, b, res_float);
            }
        }
        else if (choice == 5) {
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isEven(num) == 1) {
                printf("%d is Even\n", num);
            } else {
                printf("%d is Odd\n", num);
            }
        }
        else if (choice == 6) {
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n < 0) {
                printf("No negative numbers!\n");
            } else {
                res_int = factorial(n);
                printf("%d! = %d\n", n, res_int);
            }
        }
        else if (choice == 7) {
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num) == 1) {
                printf("%d is a Prime number\n", num);
            } else {
                printf("%d is not a Prime number\n", num);
            }
        }
        else if (choice == 8) {
            printf("Exiting... Goodbye!\n");
        }
        else {
            printf("Invalid option, try again.\n");
        }
    }

    return 0;
}

int add(int a, int b) {
    int answer;
    answer = a + b;
    return answer;
}

int subtract(int a, int b) {
    int answer;
    answer = a - b;
    return answer;
}

int multiply(int a, int b) {
    int answer;
    answer = a * b;
    return answer;
}

float divide(int a, int b) {
    float answer;
    answer = (float)a / (float)b;
    return answer;
}

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int factorial(int n) {
    int f = 1;
    int i;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}