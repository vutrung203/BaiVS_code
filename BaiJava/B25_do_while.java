package BaiJava;

import java.util.Scanner;

public class B25_do_while {
    public static void main(String[] args) {
        int n;    
        try (Scanner sc = new Scanner(System.in)) {
            //System.out.println("nhap vao n : ");
            do 
            {
                System.out.println("nhap vao n > 0 : ");
                n = sc.nextInt();   
            } while (n<=0);
        }
    }
}
