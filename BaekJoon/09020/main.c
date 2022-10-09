#include <stdio.h>
int p[10001] = {1, 1};
int main()
{
    int k = 0;
    for (int i = 2; i < 10001; i++)
    {
        if (p[i] == 0)
        {
            for (int j = 2; i * j < 10001; j++)
            {
                p[i * j] = 1;
            }
            //소수배열 구함
            p[k] = i;
            k++;
        }
    }

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);

        int j = 0;
        //숫자 1, 숫자 2, 숫자간 차
        int res[3] = {0, 0, 999999};
        while (1)
        {
            int check = 0;
            const int a = p[j];
            const int b = n - p[j];

            //처음 수 가 두번째 수 보다 커지면 종료
            if ((b - a) < 0)
            {
                break;
            }

            //저장된 소수를 조회
            for (int l = 0; l < k; l++)
            {
                if (b == p[l])
                {
                    check = 1;
                    break;
                }
                if (b < p[l])
                {
                    break;
                }
            }
            if (check == 1)
            {
                if (((b - a) < res[2]))
                {
                    res[0] = a;
                    res[1] = b;
                    res[2] = b - a;
                }
            }
            j++;
        }
        printf("%d %d\n", res[0], res[1]);
    }
}