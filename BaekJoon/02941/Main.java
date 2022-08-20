import java.util.Scanner;
public class Main{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		int strLen = str.length();
		int strCnt = strLen;

		int i = 1;
		for(; i<strLen; i++){
			char c = str.charAt(i);
			char b = str.charAt(i-1);

			if(c=='j'){
				if(b=='l'||b=='n'){
					strCnt--;
				}
			}
			if(c=='-'){
				strCnt--;
			}
			if(c=='='){
				if(i<2){
					strCnt--;
				}
				else{
					if(b=='z'&&(str.charAt(i-2)=='d')){
						strCnt-=2;
					}
					else{
						strCnt--;
					}
				}
			}
		}
		System.out.println(strCnt);
	}
}
//String 클래스의 replace 매서드를 쓰는것이 핵심이었던듯 하다. 속도 차이는 거의 없는듯.