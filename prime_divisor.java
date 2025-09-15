import java.util.*;

public class prime_divisor{
 public static  Map<Integer,Integer> tub_kopaytiruvchilarga_ajratish(int n){
  Map<Integer,Integer> mp=new HashMap<>();
  if(n<=1) return mp;
  while (n%2==0){
   mp.put(2,mp.getOrDefault(2,0)+1);
   n/=2;
  } 
  while(n%3==0){
   mp.put(3,mp.getOrDefault(3,0)+1);
   n/=3;
  }
  for(int i=5;i*i<=n;i+=6){
   while (n%i==0){
    mp.put(i,mp.getOrDefault(i,0)+1);
    n/=i;
   } 
   while(n%(i+2)==0){
    mp.put(i+2,mp.getOrDefault(i+2,0)+1);
    n/=(i+2);
   }
  } 
  if(n>1){
   mp.put(n,mp.getOrDefault(n,0)+1);
  }
  return mp;
 }
 
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Map<Integer,Integer> mp=tub_kopaytiruvchilarga_ajratish(n);
		for(Map.Entry<Integer,Integer> e:mp.entrySet()){
		 System.out.println(e.getKey() + "^" + e.getValue());
		}
		sc.close();
	}
}
