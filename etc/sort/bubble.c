/*
거품정렬
*/

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int N;
    printf("정렬할 수 개수 입력 : ");
    scanf("%d", &N);

    int *pArr = malloc(sizeof(int) * N);

    printf("정렬할 수 입력 :\n");
    for (int i = 0; i < N; i++)
    {
        int t;
        scanf("%d", &t);
        pArr[i] = t;
    }

    //정렬. 큰수가 뒤로.
    for (int i = 0, tmp = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (pArr[j] > pArr[j + 1])
            {
                tmp = pArr[j + 1];
                pArr[j + 1] = pArr[j];
                pArr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", pArr[i]);
    }
}