#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[10002], B[10002];
    scanf("%s %s", A, B);

    int lenA, lenB;
    lenA = strlen(A);
    lenB = strlen(B);

    int numBigger;
    if (lenA > lenB)
    {
        numBigger = lenA;
    }
    else
    {
        numBigger = lenB;
    }

    //결과저장공간
    int *resNum = calloc(numBigger + 1, sizeof(int));

    //결과 resNum에 거꾸로 저장
    int a = lenA - 1, b = lenB - 1;
    for (int i = 0; i < lenA; i++)
    {
        resNum[i] = A[a] - '0';
        a--;
    }
    for (int i = 0; i < lenB; i++)
    {
        resNum[i] += B[b] - '0';
        b--;
    }

    //한 칸에서 10이상인 수 정리
    for (int i = 0; i < numBigger; i++)
    {
        if (resNum[i] > 9)
        {
            resNum[i + 1]++;
            resNum[i] -= 10;
        }
    }

    //출력
    if (resNum[numBigger] > 0)
    {
        printf("%d", resNum[numBigger]);
    }
    for (int i = numBigger - 1; i > -1; i--)
    {
        printf("%d", resNum[i]);
    }
}
/**
 *  매우 큰 수 더하기 로직을 구현
 */