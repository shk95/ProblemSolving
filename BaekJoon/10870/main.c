#include <stdio.h>
int fib(int x)
{
    if (x < 2)
    {
        return x;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}