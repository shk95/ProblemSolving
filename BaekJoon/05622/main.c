/* 특정 문자범위를 숫자로 치환하는 문제.
각각 문자 범위에 대해 하드코딩하는게 가장 단순한 풀이로 보인다. */
#include <stdio.h>
#include <string.h>
void func(char *in, int length)
{
    int res = 0;
    for (int i = 0; i < length; i++)
    {
        char tmp = in[i];
        if (tmp < 'D')
        {
            res += 3;
        }
        else if (tmp < 'G')
        {
            res += 4;
        }
        else if (tmp < 'J')
        {
            res += 5;
        }
        else if (tmp < 'M')
        {
            res += 6;
        }
        else if (tmp < 'P')
        {
            res += 7;
        }
        else if (tmp < 'T')
        {
            res += 8;
        }
        else if (tmp < 'W')
        {
            res += 9;
        }
        else
        {
            res += 10;
        }
    }
    printf("%d", res);
}
int main()
{
    char input[16];
    scanf("%s", input);
    int len = strlen(input);

    func(input, len);

    return 0;
}