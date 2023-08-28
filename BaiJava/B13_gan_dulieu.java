package BaiJava;

import java.util.Scanner;

public class B13_gan_dulieu {
    public static void main(String[] args) 
    {
        float a;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap vao a : ");
            a = sc.nextFloat();
            System.out.println("a = "+a);
        }
            a+=3;
            System.out.println("a + = 3 : "+a);
      
            a-=2;
            System.out.println("a - = 2 :"+a);

            a*=3;
            System.out.println("a * = 3 :"+a);

            a/=3;
            System.out.println("a / = 3 :"+a);

            a%=3;
            System.out.println("a % = 3 :"+a);
        
    }
}