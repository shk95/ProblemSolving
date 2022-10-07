#include <stdio.h>
int a[1000001];
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    for (int i = 2; i < 1000001; i++)
    {
        for (int j = 2;; j++)
        {
            if (a[i] == 1)
            {
                break;
            }
            int t = i * j;
            if (t > 1000000)
            {
                break;
            }
            else
            {
                a[t] = 1;
            }
        }
    }
    a[1] = 1;
    for (; M < N + 1; M++)
    {
        if (a[M] == 0)
        {
            printf("%d\n", M);
        }
    }
}