import java.util.Scanner;
public class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        double A, B, V;

        A = sc.nextDouble();
        B = sc.nextDouble();
        V = sc.nextDouble();

        double temp = (V-A)/(A-B);
        
        System.out.printf("%1.0f",Math.ceil(temp)+1);
    }
}
/*
반복문과 조건문으로 인한 시간지연문제
방정식으로 계산하는방식으로 변경
(V-A)/(A-B)>=attempt

구하는 값 = 계산한값(소숫점에서올림)+1
*/