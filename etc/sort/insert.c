/*
삽입 정렬
*/

#include <stdio.h>
#include <stdlib.h>
void insert(int *, int *, int);
int main()
{
    int N;
    printf("정렬할 수 개수 입력 :");
    scanf("%d", &N);

    int *l = malloc(sizeof(int) * N);

    printf("정렬할 수 입력 :\n");
    for (int i = 0, t; i < N; i++)
    {
        scanf("%d", &t);
        if (i > 0)
        {
            insert(&t, l, i);
        }
        else
        {
            l[i] = t;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", l[i]);
    }
}
void insert(int *t, int *l, int i)
{
    l[i] = *t;
    for (int j = i, a; j > 0; j--)
    {
        if (l[j] < l[j - 1])
        {
            a = l[j];
            l[j] = l[j - 1];
            l[j - 1] = a;
        }
    }
}