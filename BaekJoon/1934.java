import java.util.*;
import java.io.*;

class Main{
	public static void main(String... args)throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int ii = Integer.parseInt(br.readLine());
		for (int i = 0; i < ii ; i++){
			StringTokenizer st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int d = a*b;
			if(a<b){
				int c = a;
				a = b;
				b = c;
			}
			int c = 0;
			while(true){
				c = a%b;
				if(c == 0){
					break;
				}
				a = b;
				b = c;
			}
			bw.write(d/b+"\n");		
		}
		br.close();
		bw.flush();
		bw.close();
	}
}

