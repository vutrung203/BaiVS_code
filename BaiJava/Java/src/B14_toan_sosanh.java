import java.util.Scanner;

public class B14_toan_sosanh {
    public static void main(String[] args) 
    {
        int a , b;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap a : ");
            a = sc.nextInt();
            System.out.println("nhap b : ");
            b = sc.nextInt();
        }
        System.out.println(a+" = "+b+" : "+(a==b));
        System.out.println(a+" != "+b+" : "+(a!=b));
        System.out.println(a+" < "+b+" : "+(a<b));
        System.out.println(a+" <= "+b+" : "+(a<=b));
        System.out.println(a+" > "+b+" : "+(a>b));
        System.out.println(a+" >= "+b+" : "+(a>=b));
        System.out.println("========================");
        System.out.println("ca 2 so la chan : "+(a%2==0 && b%2==0));
        System.out.println("co it nhat 1 so chan : "+(a%2==0 || b%2==0));
        
    }
}
