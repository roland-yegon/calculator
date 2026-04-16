#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int isEven(int num);
int factorial(int n);
int isPrime(int num);

int main()
{
    int choice, a, b, num, n;
    long long result_ll;
    float result_float;

    do
    {
        printf("\n*******************************************\n");
        printf("          FUNCTION CALCULATOR MENU\n");
        printf("*******************************************\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Even or Odd Check\n");
        printf("6. Factorial\n");
        printf("7. Prime Number Check\n");
        printf("8. Quit\n");
        printf("-------------------------------------------\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %d + %d = %d\n", a, b, add(a, b));
            break;

        case 2:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %d - %d = %d\n", a, b, subtract(a, b));
            break;

        case 3:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %d * %d = %d\n", a, b, multiply(a, b));
            break;

        case 4:
            printf("Enter numerator: ");
            scanf("%d", &a);
            printf("Enter denominator: ");
            scanf("%d", &b);
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result_float = divide(a, b);
                printf("Result: %d / %d = %.2f\n", a, b, result_float);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("%d is %s.\n", num, isEven(num) ? "even" : "odd");
            break;

        case 6:
            printf("Enter a non-negative integer: ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Factorial is undefined for negative numbers.\n");
            }
            else
            {
                result_ll = factorial(n);
                printf("%d! = %lld\n", n, result_ll);
            }
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("%d is %s prime.\n", num, isPrime(num) ? "" : "not");
            break;

        case 8:
            printf("Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Enter a number from 1 to 8.\n");
        }
    } while (choice != 8);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int isEven(int num)
{
    return (num % 2 == 0) ? 1 : 0;
}

int factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}