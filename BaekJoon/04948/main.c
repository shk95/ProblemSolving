#include <stdio.h>
int p[246913] = {1, 1};
int main()
{
    for (int i = 2; i < 246913; i++)
    {
        if (p[i] == 0)
        {
            for (int j = 2; i * j < 246913; j++)
            {
                p[i * j] = 1;
            }
        }
    }
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        int c = 0;
        for (int i = n + 1; i < 2 * n + 1; i++)
        {
            if (p[i] == 0)
            {
                c++;
            }
        }
        printf("%d\n", c);
    }
}