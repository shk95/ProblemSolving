import java.util.*;
import java.io.*;

class Main{

	static boolean[][] a;
	static int ii;
	static BufferedReader br;
	static BufferedWriter bw;
	static {
		br = new BufferedReader(new InputStreamReader(System.in));
		bw = new BufferedWriter(new OutputStreamWriter(System.out));
		try{
			ii = Integer.parseInt(br.readLine());
		}catch(Exception e){}
		a = new boolean[ii][ii];
	}
	public static void main(String... args)throws Exception {
		for(int i = 0; i<ii; i++){
			f(ii);
			for(int j = 0; j<ii; j++){
				if(a[i][j] == false){
					bw.write("*");
				}else{
					bw.write(" ");
				}
				if(j==(ii-1)){
					bw.newLine();
				}
			}
		}
		bw.flush();
		bw.close();
	}
	static void f(int i){
		if(i<3) return;
		for(int k = 0; k < i; k++){
			for(int l = 0; l<i; l++){
				if(k>=i/3&&k<i*2/3){
					a[k][k] = true;
				}
			}
		}
		f(i/3);
	}
}

