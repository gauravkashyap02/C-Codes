import java.util.Scanner;
public class Oneoddoneeven {
    public static void main(String[] args) {
        int a;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your value");
        a=sc.nextInt();
        int b;
        System.out.println("Enter your value");
        b=sc.nextInt();
        if(a%2==0 && b%2==0){
            System.out.printf("result of %d and %d is %d",a,b,a*b);
        }
        else if(a%2!=0 && b%2!=0){
            System.out.printf("result of %d and %d is %d",a,b,a+b);
        }
        else{
            System.out.printf("result of %d and %d is %d",a,b,a-b);

        }
    }
}
