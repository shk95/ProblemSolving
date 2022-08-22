import java.util.Scanner;
public class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int A, B, V, attempt = 1;

        A = sc.nextInt();
        B = sc.nextInt();
        V = sc.nextInt();

        int temp;
        while(true){
            temp = V-(A-B)*attempt;
            if(temp<=A){
            break;
            }
            attempt++;
        }
        System.out.println(attempt+1);
    }
}