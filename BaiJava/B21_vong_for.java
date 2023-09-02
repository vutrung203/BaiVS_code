package BaiJava;

import java.util.Scanner;

public class B21_vong_for {
    public static void main(String[] args) {
        int n;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap n : ");
            n = sc.nextInt();
        }
        for (int i = 0; i <= n; i++) 
        {
            System.out.println(i+" test");
        }
        System.out.println("======================");
        for (int i = n; i >= 0; i--) 
        {
            System.out.println(i+" test");
        }
    }
}