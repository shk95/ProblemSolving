#include <stdio.h>
#include <string.h>
//몫 거꾸로 저장
char s[1002];
//몫 카운트
void ss();
//몫 인덱스
int sss = 1;
int main()
{
    char n[1003], m[1003];
    scanf("%s %s", n, m);

    // m = 나누는 수
    int lenM = strlen(m);
    int lenN = strlen(n);

    // n>=m
    //검사 비트 만들기위해 한칸씩 옮김
    for (int i = lenN; i > -1; i--)
    {
        n[i + 1] = n[i] - '0';
        m[i + 1] = m[i] - '0';
    }
    n[0] = 0;
    m[0] = 0;

    //뺼샘
    while (1)
    {
        int lastN = lenN;
        for (int i = lenM; i > 0; i--)
        {
            n[lastN] -= m[i];
            if (n[lastN] < 0)
            {
                n[lastN] += 10;
                n[lastN - 1]--;
            }
            lastN--;
        }
        for (int i = lastN; i > 0; i--)
        {
            if (n[i] < 0)
            {
                n[i] += 10;
                n[i - 1]--;
            }
        }
        if (n[0] < 0)
        {
            break;
        }
        else
        {
            ss();
        }
    }

    //나머지
    int lastN = lenN;
    for (int i = lenM; i > 0; i--)
    {
        n[lastN] += m[i];
        if (n[lastN] > 9)
        {
            n[lastN] -= 10;
            n[lastN - 1]++;
        }
        lastN--;
    }
    for (int i = lastN; i > 0; i--)
    {
        if (n[i] > 9)
        {
            n[i] -= 10;
            n[i - 1]++;
        }
    }

    //나머지 인덱스 찾기
    int startN = 1;
    for (; startN < lenN; startN++)
    {
        if (n[startN] > 0)
        {
            break;
        }
    }

    //몫, 나머지 출력
    for (int i = sss - 1; i > -1; i--)
    {
        printf("%d", s[i]);
    }
    printf("\n");
    for (; startN < lenN + 1; startN++)
    {
        printf("%d", n[startN]);
    }
}

void ss()
{
    s[0]++;
    int i = 0;
    while (1)
    {
        if (s[i] > 9)
        {
            s[i + 1]++;
            s[i] -= 10;
        }
        else
        {
            break;
        }
        i++;
    }
    if (s[sss] > 0)
    {
        sss++;
    }
}

/*
    큰수 나눗셈 문제. n(나눠지는수) 을 m(나누는수) 으로 나눈 몫 과 나머지 출력

    빼기를 반복하기.
*/
