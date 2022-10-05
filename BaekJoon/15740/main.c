#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void f(char *);
int lastIdx;
char A[10003], B[10003];
int main()
{
    scanf("%s %s", A, B);
    int lenA = strlen(A);
    int lenB = strlen(B);

    if (lenA > lenB)
    {
        lastIdx = lenA + 1;
    }
    else
    {
        lastIdx = lenB + 1;
    }

    for (int i = lenA - 1, j = lastIdx; i > 0; i--, j--)
    {
        A[j] = A[i] - '0';
        A[i] = 0;
    }
    for (int i = lenB - 1, j = lastIdx; i > 0; i--, j--)
    {
        B[j] = B[i] - '0';
        B[i] = 0;
    }

    //
    printf("A input : ");
    for (int i = 0; i < lastIdx + 1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("B input : ");
    for (int i = 0; i < lastIdx + 1; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");
    //

    //맨앞자리 - 인지 검사
    if (A[0] == '-')
    {
        //부호비트
        A[0] = 9;
        f(A);
    }
    else
    {
        A[lastIdx - lenA + 1] = A[0] - '0';
        A[0] = 0;
    }
    if (B[0] == '-')
    {
        //부호비트
        B[0] = 9;
        f(B);
    }
    else
    {
        B[lastIdx - lenB + 1] = B[0] - '0';
        B[0] = 0;
    }

    //
    printf("A befor cal : ");
    for (int i = 0; i < lastIdx + 1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("B befor cal : ");
    for (int i = 0; i < lastIdx + 1; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");
    //

    //계산
    for (int i = lastIdx; i > 0; i--)
    {
        A[i] += B[i];
        if (A[i] > 9)
        {
            A[i] -= 10;
            A[i - 1]++;
        }
    }
    A[0] += B[0];
    A[0] %= 10;

    if (A[0] == 9)
    {
        f(A);
        A[0] = '-';
    }
    else
    {
        A[0] = 0;
    }

    //
    printf("A after calculate : ");
    for (int i = 0; i < lastIdx + 1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    //

    //출력 인덱스 찾기
    int startIdx = 0;
    for (int i = 0; i < lastIdx + 1; i++)
    {
        if (!((A[i] == 0) || (A[i] == '-')))
        {
            break;
        }
        startIdx++;
    }

    //
    printf("startIdx : %d\n", startIdx);
    //

    if (startIdx == lastIdx + 1)
    {
        printf("%d", 0);
    }
    else
    {
        if (A[0] == '-')
        {
            printf("-");
        }
        for (; startIdx < lastIdx + 1; startIdx++)
        {
            printf("%d", A[startIdx]);
        }
    }
    printf("\n");
}
void f(char *c)
{
    for (int i = 1; i < lastIdx + 1; i++)
    {
        c[i] = 9 - c[i];
    }
    c[lastIdx]++;
    for (int i = lastIdx; i > 0; i--)
    {
        if (c[i] > 9)
        {
            c[i] -= 10;
            c[i - 1]++;
        }
    }
}
/*
음수이면 최상위비트에 9를 표시, 이후 10의 보수 구함.
계산후 부호비트의 1의자리가 0이면 양수.
*/