// printed correct factorial of the variable "num"

#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1); // recursively calling the factorial function
}

int main(void)
{
    int num = 8;
    printf("%d\n", factorial(num));
}