package BaiJava;

import java.util.Scanner;

public class B23_vong_while {
    public static void main(String[] args) {
        int x,n;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap vao n < 0 : ");
            n = sc.nextInt();
            x=n;
            while (x!=0) 
            {
                System.out.println("nhap 0 de thoat : ");
                System.out.println("nhap ky tu khac de tiep tuc");
                x = sc.nextInt();
            }
            System.out.println("=============================");
            while (true) 
            {
                System.out.println(x);
                x++;
                if (x==10) 
                {
                    break;   
                }   
            }
        }
    }
}