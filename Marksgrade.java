import java.util.Scanner;
public class Marksgrade {
    public static void main(String[] args) {
        int marks;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter your value");
        marks=sc.nextInt();
        if(marks>90 && marks<100 ){
            System.out.println("A+");
        }
        else if(marks>80 && marks<90){
            System.out.println("A");
        }
        else if(marks>70 && marks<80){
            System.out.println("B+");
        }
        else if(marks>60 && marks<70){
            System.out.println("B");
        }
        else{
            System.out.println("Do labour hard guys");
        }
    }
}
