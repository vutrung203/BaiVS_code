package BaiJava;

import java.util.Scanner;

public class B17_lenh_if_else {
    public static void main(String[] args) {
        // int n;
        // try (Scanner sc = new Scanner(System.in)) {
        //     System.out.println("nhap so nguyen : ");
        //     n = sc.nextInt();
        // }
        // // ktr chan le
        // if (n%2==0) 
        // {
        //     System.out.println(n+" la so chan");            
        // }
        // else
        // {
        //     System.out.println(n+" la so le");
        // }

        double a,b,x;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("nhap a = ");
            a = sc.nextDouble();
            System.out.println("nhap b = ");
            b = sc.nextDouble();
        }
        if (a==0) 
        {
            // tinh huong a = 0
            if (b==0) 
            {
                // tinh huong a = 0 | b = 0
                System.out.println("pt vo so nghiem");   
            }
            else
            {
                // tinh huong a = 0 | b!=0
                System.out.println("pt vo nghiem");
            }
        }
        else
        {
            // tinh huong a! = 0
            x = -b/a;
            System.out.println("co nghiem x = "+x);
        }
    }
}
