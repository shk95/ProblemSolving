#include <stdio.h>
void foo(int *N, int *res)
{
    if (*N > 1)
    {
        *res *= *N;
        (*N)--;
        return foo(N, res);
    }
    else
    {
        return;
    }
}
int main(void)
{
    int N;
    scanf("%d", &N);

    int res = 1;
    foo(&N, &res);
    printf("%d", res);
}