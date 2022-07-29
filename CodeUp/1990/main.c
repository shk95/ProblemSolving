#include <stdio.h>
#include <string.h>
//나눗셈 과정을 알고리즘화
int main()
{
    /*문자열 최대자릿수만큼 지정후 저장
        에서 문제 발생. 컴파일러종류에 따른 배열을 변수로 지정할 때의 에러.
        제시된 10의 500제곱 크기의 배열 선언에서 문제가 생김.



    int maxSize = 1;
    for (int i = 0; i < 500; i++)
    {
        maxSize *= 10;
    }

    */

    char temp[100000000];
    scanf("%s", temp);

    //각자릿수를 전부 더하는 것으로 계산과정 단축
    long long int sumNum = 0;
    int i = 0;

    while (temp[i] != '\0')
    {
        sumNum += temp[i] - 48;
        i++;
    }
    int res = sumNum % 3;

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