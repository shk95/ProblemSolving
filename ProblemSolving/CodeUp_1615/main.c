#include <stdio.h>
int sum(int size, int num)
{
    int res = num;
    int j = 1;
    for (int i = 0; i < size; i++) {
        res += (num / j) % 10;
        j *= 10;
    }
    return res;
}
int selfNumCount(int start, int end)
{
    int checkNum[5001] = { 0 };
    int i = 0;
    //�ڸ��� ������ �۾Ƽ� ���� ���ؼ� ��.
    while (1) {
        if (i < 10) {
            int temp = sum(1, i);
            checkNum[temp] = 1;
            i++;
        }
        else if (i < 100) {
            int temp = sum(2, i);
            checkNum[temp] = 1;
            i++;
        }
        else if (i < 1000) {
            //i������ ���� ����
            int temp = sum(3, i);
            checkNum[temp] = 1;
            i++;
        }
        else {
            int temp = sum(4, i);
            checkNum[temp] = 1;
            i++;
        }
        if (i > end)break;
    }

    int cnt = 0;
    for (; start <= end; start++) {
        if (checkNum[start] == 0) {
            cnt += start;
        }
    }
    return cnt;
}

void main()
{
    int startNum, endNum;
    scanf_s("%d %d", &startNum, &endNum);

    int cnt = selfNumCount(startNum, endNum);

    printf("%d", cnt);
}