import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        int k, n;
        for (int i = 0; i < T; i++) {
            int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
            k = sc.nextInt();
            n = sc.nextInt();

            if (k == 0) {
                System.out.println(num[n - 1]);
            } else {
                while (k-- > 0) {
                    for (int m = 1; m < n; m++) {
                        num[m] = num[m] + num[m - 1];
                    }
                }
                System.out.println(num[n - 1]);
            }
        }
        sc.close();
    }
}
/**
 * k번째 수열의 항 n은 k-1번째 수열의 1 ~ n까지의 합.
 * 반복문을 줄여보고싶다.
 */