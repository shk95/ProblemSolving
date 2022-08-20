//각 문자열에서 연속된 단어 묶음이 중복되지 않는것만 카운트
import java.util.Scanner;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int Cnt = sc.nextInt();

        int resCnt = Cnt;

        String str;
        for(int i = 0; i<Cnt; i++){
            str = sc.next();//라인별 문자열
            int strLen = str.length();

            char[] charArr = new char[strLen];//문자열별 문자 나눔
            int charArrIdx = 0;      

            //문자 중복 검증
            charArr[0] = str.charAt(0);
            for(int j = 1; j<strLen; j++){
                if(charArr[charArrIdx]!=str.charAt(j)){//단어의 연속 중 다른 문자가 나왔을때
                    charArrIdx++;
                    charArr[charArrIdx] = str.charAt(j);//새로운 단어로
                    
                    int charCnt = 0;//문자 배열중 중복된 단어 카운트
                    for(int k = 0; k<charArr.length; k++){
                        if(charArr[charArrIdx]==charArr[k]){
                            charCnt++;
                        }
                    }
                    if(charCnt>1){//중복 발견시 종료
                        resCnt--;
                        break;
                    }
                }
            }
        }
        System.out.println(resCnt);
    }
}
//속도 메모리면에서 만족스러운 편이지만 조금더 개선 가능해보임.