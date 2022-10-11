/*
숫자 정렬시 중복이 없는 조건
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    배열의 인덱스를 사용. ==> 카운팅 정렬(작은범위에서 효과적)
    */
    int *a = malloc(sizeof(int) * 20001);

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int b;
        scanf("%d", &b);
        a[b + 1000] = 1;
    }
    int i = 0;
    while (n > 0)
    {
        if (a[i] == 1)
        {
            printf("%d\n", i - 1000);
            n--;
        }
        i++;
    }
    free(a);
}