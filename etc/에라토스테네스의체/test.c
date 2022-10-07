#include <stdio.h>
int a[1001];
int main()
{
    /*
    에라토스테네스의 체
    a[i] == 0 이면 i == 소수. 1이면 아님.
    */
    for (int i = 2; i < 1001; i++)
    {

        for (int j = 2;; j++)
        {
            if (a[i] == 1)
            {
                break;
            }
            int t = i * j;
            if (t > 1000)
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
    int c = 0;
    for (int i = 1; i < 1001; i++)
    {
        if (a[i] == 0)
        {
            printf("%d ", i);
            c++;
        }
    }
    printf("\n개수 : %d\n", c);
}