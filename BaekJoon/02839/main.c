#include <stdio.h>
int main()
{
    int N = 0;
    scanf("%d", &N);

    int check = 1;

    int countThree;
    int countFive = N / 5;
    for (; countFive >= 0; countFive--)
    {
        countThree = (countFive * 5 * (-1) + N) / 3;

        if ((3 * countThree) == (N - 5 * countFive))
        {
            check = 0;
            break;
        }
        check = 1;
    }

    if (check == 0)
    {
        printf("%d\n", countFive + countThree);
    }
    else
    {
        printf("%d\n", -1);
    }
}

/**
 *  임의의 수 N 에 대하여, N=5*x+3*y 에서 x+y 가 최소값인 경우를 찾는다. 해가 없다면 -1 출력.
 */