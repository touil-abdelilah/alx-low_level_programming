#include <stdio.h>

void print_fibonacci(int n)
{
    if (n < 1)
        return;

    unsigned long long int fib1 = 1, fib2 = 2, fib3;
    int i;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        printf(", %llu", fib3);

        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");
}

int main()
{
    print_fibonacci(50);

    return 0;
}

