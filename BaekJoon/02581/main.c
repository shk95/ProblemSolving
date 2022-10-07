#include <stdio.h>
int a[10001] = {
    1,
    1,
};
int main()
{
    int M, N;
    scanf("%d%d", &M, &N);

    for (int i = 2; i < N + 1; i++)
    {
        if (a[i] != 1)
        {
            for (int j = 2; j * i < N + 1; j++)
            {
                a[i * j] = 1;
            }
        }
    }

    int check = 0;
    int x = 0;
    int s = 0;
    for (; M < N + 1; M++)
    {
        if (a[M] == 0)
        {
            check++;
            s += M;
        }
        if ((check == 1) && (a[M] == 0))
        {
            x = M;
        }
    }
    if (check == 0)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d\n%d", s, x);
    }
}