/*
소인수분해
에라토스테네스의 체로 소수를 구한다음 계산하는것보다 낮은 숫자부터 하나씩 대입하는것이 더 효율적.
*/
#include <stdio.h>
int a[10000001] = {1, 1};
int p[10000001];
int main()
{
    int N;
    scanf("%d", &N);

    int k = 0;
    for (int i = 2; i < N + 1; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j < N + 1; j++)
            {
                a[i * j] = 1;
            }
        }
        if (a[i] == 0)
        {
            p[k] = i;
            k++;
        }
    }
    int i = 0;
    while (1)
    {
        if (i == k)
        {
            break;
        }
        if ((N % p[i]) == 0)
        {
            printf("%d\n", p[i]);
            N /= p[i];
        }
        else
        {
            i++;
        }
    }
}