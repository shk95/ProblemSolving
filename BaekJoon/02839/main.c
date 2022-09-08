#include <stdio.h>
int main()
{
    int N;
    N = scanf("%d", &N);

    int check = 1;

    float countThree;
    int countFive = N / 5;
    for (; countFive >= 0; countFive--)
    {
        countThree = ((float)countFive * 5 * (-1) + (float)N) / 3;
        // float 비교에 문제가 있음
        if (3 * countThree == (float)(N - 5 * countFive))
        {
            check = 0;
            printf("check zero");
            break;
        }
        check = 1;
    }
    if (check == 0)
    {
        printf("%1.0f", countFive + countThree);
    }
    else
    {
        printf("%d", -1);
    }
}

/**
 *  임의의 수 N 에 대하여, N=5*x+3*y 에서 x+y 가 최소값인 경우를 찾는다. 해가 없다면 -1 출력.
 */