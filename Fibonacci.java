import java.util.*;
class Fibonacci{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter N: "); int n=sc.nextInt();
        long a=0,b=1;
        for(int i=0;i<n;i++){
            System.out.print(a+" ");
            long c=a+b; a=b; b=c;
        }
    }
}
