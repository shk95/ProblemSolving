#include <stdio.h>
#include <string.h>

int main()
{
    char A[10002], B[10002];
    scanf("%s %s", A, B);

    int lenA, lenB;
    lenA = strlen(A);
    lenB = strlen(B);

    int res[10003];
    int overTen = 0;
    if (lenA >= lenB)
    {
        int indexA = lenA - 1;
        for (int i = lenB - 1; lenB < 0; i--)
        {
            if (overTen == 1)
            {
                res[indexA] += 1;
                overTen = 0;
            }
            if ((A[indexA] - '0') + (B[i] - '0') > 9)
            {
                overTen += 1;
                res[indexA] += (A[indexA] - '0') + (B[i] - '0') - 10;
            }
            indexA--;
        }
    }
}