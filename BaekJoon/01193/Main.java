import java.util.Scanner;
public class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        
        int i = 1;
        int numRow;
        int numAt;
        //방정식 구조상 이차방정식의 해를 구해야해서 반복문으로 대체
        for(;;){
            numRow = i*(i-1)/2+1;
            if(numRow>X){
                i--;
                numAt = X-i*(i-1)/2;
                break;
            }
            i++;
        }
        
        int num1,num2;
        num1 = numAt;
        num2 = i-num1+1;

        //홀수번째 마다 순서가 반전
        if(i%2==0){
            System.out.printf("%d/%d",num1,num2);
        }else{
            System.out.printf("%d/%d",num2,num1);
        }
    }
}
/**
 * 일정한 규칙의 분수 나열에 대하여 주어진 X번째 수가 해당하는 분수 값을 알아본다.
 * 분수들이 나열되는 묶음이 수열의 구조를 가짐.
 * 
 */