import java.util.*;

public class binary_search {
 public static int binarySearch(int[] arr,int x){
  int left=0;
  int right=arr.length-1;
  while(left<=right){
   int middle=left+(right-left)/2;
   if(arr[middle]==x) return middle;
   if(arr[middle]<x)
       left=middle+1;
   else
      right=middle-1;
  }
  return -1;
 }
	public static void main(String[] args) {
     try (Scanner sc = new Scanner(System.in)) {
         int n=sc.nextInt();
         int[] arr=new int[n+1];
         for(int i=1;i<=n;i++){
             arr[i]=sc.nextInt();
         }
         int x=sc.nextInt();
         Arrays.sort(arr);
         System.out.println(binarySearch(arr,x));
     }
	}
}