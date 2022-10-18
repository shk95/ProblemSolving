/*
시간 : 396ms
*/
#include <stdio.h>
int l[2000001];
int main()
{
    int N;
    scanf("%d", &N);

    int a = N;
    while (a-- > 0)
    {
        int t;
        scanf("%d", &t);
        l[t + 1000000] = 1;
    }
    int i = 0;
    while (1)
    {
        if (N == 0)
        {
            break;
        }
        if (l[i] == 1)
        {
            printf("%d\n", i - 1000000);
            N--;
        }
        i++;
    }
}