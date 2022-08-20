/* (c-b)*판매대수>[true라는뜻]*a
**
** 최소 판매대수 == a/(c-b) +1
**
** c-b 가 0이하 일때 -1 표시
*/
import java.util.Scanner;
public class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        long A = sc.nextInt();
        long B = sc.nextInt();
        long C = sc.nextInt();

        if(C-B<=0){
            System.out.println(-1);
        }else{
            System.out.println((A/(C-B)+1));           
        }
    }
}