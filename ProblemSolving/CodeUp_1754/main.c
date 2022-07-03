// 목표 : 아주 큰 숫자 두개를 비교하여 작은것을 먼저출력
#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    //자릿수 저장
    int aa = strlen(a);
    int bb = strlen(b);
    //먼저 자릿수가 같은지 비교
    if (aa != bb)
    {
        //자릿수가 같지않다면 자릿수가 큰것이 큰수
        if (aa > bb)
        {
            printf("%s %s", b, a);
        }
        else
        {
            printf("%s %s", a, b);
        }
    }
    else
    {
        int i = 0;
        while (a[i] != '\0')
        {
            //자릿수가 같으며, index 숫자 크기비교
            if (a[i] == b[i])
            {
                i++;
            }
            else
            {
                // char 형도 아스키코드에 대한 정수이기때문에 단순 비교 가능.
                if (a[i] > b[i])
                {
                    printf("%s %s", b, a);
                    break;
                }
                else
                {
                    printf("%s %s", a, b);
                    break;
                }
            }
        }
    }
}