#include <stdio.h>
#include <string.h>
//나눗셈 과정을 알고리즘화
int main()
{
    //문자열 최대자릿수만큼 지정후 저장
    int maxSize = 1;
    for (int i = 0; i < 500; i++)
    {
        maxSize *= 10;
    }
    char temp[maxSize];
    scanf("%s", temp);

    //문자열을 정수배열로 바꿈
    int len = strlen(temp);
    int num[len];
    for (int i = 0; i < len; i++)
    {
        num[i] = temp[i] - 48;
    }

    /*
    나누는수(3) 으로 빼기 반복. 3보다 작은수일때는 다음 자릿수로 값을 넘겨서 합침.
    마지막 자릿수일때는 남은숫자가 나머지.
    */
    int res;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num[i] < 3)
            {
                break;
            }
            num[i] -= 3;
        }
        if (num[i] == num[len - 1])
        {
            res = num[i];
        }
        else
        {
            num[i + 1] += num[i];
        }
    }
    if (res == 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}