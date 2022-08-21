/*
n 계층의 원소 개수 : (n-1)*6, 1계층 은 1

구하는 수 x = 입력받은 N의 소속된 계층

각 계층의 마지막 수를 기준으로 수열을 생성해서 배열 로 생성

각 계층의 마지막 수 = 직전계층의 마지막 수 + 현재 계층의 원소 개수

수열 : k1 = 1 k2 = k1(1) + (2-1)6 = 7 k3 = k2(7) + (3-1)6 = 19 k4 = k3(19) + (4-1)*6 = 37 b ...

구하는 수는 x 는 수열의 몇번째 값 보다 작거나 같은지

수열 의 k 항 :

(n-1)*6에 1...k 까지의 합

정리하면 3n^2 -3n +1
입력받은 N 에 대해 만족하는 k (k!=1) : 3k^2 -3k +1 >= N > 3(k-1)^2 - 3(k-1) + 1
*/
import java.util.Scanner;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();
        int k = 1;
        int res;
        while(true){
            res = 3*k*k-3*k+1;
            if(res>=N){
                break;
            }else{
                k++;
            }
        }
        System.out.println(k);
    }
}