    import java.util.*;

public class binary_search_recursion {

 public static int binarySearch(int[] arr,int x,int left,int right){
  if(left<=right){
   int middle=left+(right-left)/2;
   if(arr[middle]==x)
        return middle;
   if(arr[middle]<x)
        return binarySearch(arr,x,middle+1,right);
   else
        return binarySearch(arr,x,left,middle-1);
  }
  return -1;
 }
	public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in)){
            int n=sc.nextInt();
		int[] arr=new int[n+1];
		for(int i=1;i<=n;i++){
		 arr[i]=sc.nextInt();
		}
		int x=sc.nextInt();
		Arrays.sort(arr);
		System.out.println(binarySearch(arr,x,0,n));
        }
		
		
	}

}
