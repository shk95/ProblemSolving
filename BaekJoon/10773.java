import java.util.*;

class Main{
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		while(i-->0){
			Integer ii = (Integer)sc.nextInt();
			if(ii == 0){
				Stack.pop();
			}else{
				Stack.push(ii);
			}
		}
		int res = 0;
		for(int k = 0; k < Stack.top; k++){
			res += Stack.stack[k];
		}
		System.out.println(res);
	}
	private static class Stack{
		static Integer[] stack;
		static int top;

		static{
			top = 0;
			stack = new Integer[1];
		}

		public static void pop(){
			stack[--top] = null;
			modArr();
		}

		public static void push(Integer num){
			stack[top++] = num;
			modArr();
		}	

		public static int length(){
			int len = 0;
			for(int i = 0; i < stack.length; i++){
				if(stack[i] == null){
					break;
				}else{
					len++;
				}
			}
			return len;
		}

		public static Integer get(int i){
			return stack[i];
		}

		private static void modArr(){
			Integer[] n = new Integer[top + 1];
				for(int i = 0; i < top; i++){
					n[i] = stack[i];
				}
			stack = n;
		}
	}
}

