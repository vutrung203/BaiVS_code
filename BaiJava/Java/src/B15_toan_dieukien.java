package BaiJava;

import java.util.Scanner;

public class B15_toan_dieukien {
    public static void main(String[] args) 
    {
        int a ;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap a : ");
            a = sc.nextInt();
        }
        String ketqua = (a%2==0)?"so chan":"so le";
        System.out.println(a+" la "+ketqua);
    }
}
