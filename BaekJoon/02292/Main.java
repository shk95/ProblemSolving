/*
n 계층의 원소 개수 : (n-1)*6, 1계층 은 1

구하는 수 x = N의 소속된 계층 -1

각 계층의 마지막 수를 기준으로 수열을 생성해서 배열 로 생성

각 계층의 마지막 수 = 직전계층의 마지막 수 + 현재 계층의 원소 개수

수열 : k1 = 1 / k2 = k1(1) + (2-1)6 = 7 / k3 = k2(7) + (3-1)6 = 19 / k4 = k3(19) + (4-1)*6 = 37 ...

구하는 수는 x 는 수열의 몇번째 값 보다 작거나 같은지

수열 = (n-1)*6+1

(n-2)6+1<x<=(n-1)6+1

-1씩하기

(x-1)/6<=n<(x-1)/6+1

(x-1)/6 하면 됨 (소수점 올림 처리)
*/
import java.util.Scanner;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();

        System.out.println((long)(Math.ceil((N-1)/6F)+1));
    }
}