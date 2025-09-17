import java.util.*;//linear search
class Main {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0; i<n; i++) {
			arr[i]=sc.nextInt();
		}

		int x=sc.nextInt(),k=0;
		for(int i=0; i<n; i++) {
			if(arr[i]==x) {
				k=i;
			}
		}
		if(k>0) {
			System.out.println(k);
		} else {
			System.out.println(-1);
		}
        sc.close();
	}/*
5
1 2 3 4 5
3
2 
index 0,1,2,3,4
	*/
}