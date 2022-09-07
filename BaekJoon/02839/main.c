#include <stdio.h>
int main()
{
    int N;
    N = scnaf("%d", &N);

    int count = N / 5;
    N = N % 5;
    for (;;)
    {
        if ((N % 5) == 0)
        {
            break;
        }
        else
        {
            count--;
            N += 5;
        }
    }
}