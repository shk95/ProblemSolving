#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int f(char *);
int lastIdx;
int main()
{
    char A[10003], B[10003];
    scanf("%s %s", A, B);
    int lenA = strlen(A);
    int lenB = strlen(B);

    if (lenA > lenB)
    {
        lastIdx = lenA;
    }
    else
    {
        lastIdx = lenB;
    }

    for (int i = lenA - 1, j = lastIdx; i > 0; i--, j--)
    {
        A[j] = A[i] - '0';
    }
    for (int i = lenB - 1, j = lastIdx; i > 0; i--, j--)
    {
        B[j] = B[i] - '0';
    }

    if (A[0] == '-')
    {
        //부호비트
        A[0] = 9;
        f(A);
    }
    else
    {
        A[lastIdx - lenA] = A[0] - '0';
    }
    if (B[0] == '-')
    {
        //부호비트
        B[0] = 9;
        f(B);
    }
    else
    {
        B[lastIdx - lenB] = B[0] - '0';
    }

    //계산
}
int f(char *c)
{
    int i = 0;
}
/*
음수이면 최상위비트에 9를 표시, 이후 10의 보수 구함.
계산후 부호비트의 1의자리가 0이면 양수.
*/