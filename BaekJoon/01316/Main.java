import java.util.Scanner;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int Cnt = sc.nextInt();
        String str;
        int resCnt = Cnt;

        for(int i = 0; i<Cnt; i++){
            str = sc.next();
            int strLen = str.length();

            char[] charArr = new char[strLen];
            int charArrIdx = 0;      

            //문자 중복 검증
            charArr[0] = str.charAt(0);
            for(int j = 1; j<strLen; j++){
                if(charArr[charArrIdx]!=str.charAt(j)){
                    charArrIdx++;
                    charArr[charArrIdx] = str.charAt(j);
                    
                    int charCnt = 0;
                    for(int k = 0; k<charArr.length; k++){
                        if(charArr[charArrIdx]==charArr[k]){
                            charCnt++;
                        }
                    }
                    if(charCnt>1){
                        resCnt--;
                        break;
                    }
                }
            }
        }
        System.out.println(resCnt);
    }
}