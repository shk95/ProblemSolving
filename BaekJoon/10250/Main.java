import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        int H, N;
        for (int i = 0; i < T; i++) {
            H = sc.nextInt();
            N = sc.nextInt();// 높이 H 와 층당 방의개수 W. W 를 받아야 하는 위치이지만 문제의 조건상 의미가 없음.
            N = sc.nextInt();

            if (N % H == 0) {
                System.out.println(H * 100 + N / H);
            } else {
                System.out.println(N % H * 100 + N / H + 1);
            }
        }
        sc.close();
    }
}
