package BaiJava;

import java.util.Scanner;

public class B11_toancoban {
    public static void main(String[] args) 
    {
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap vao a = ");
        a = sc.nextInt();
        System.out.println("nhap vao b = ");
        b = sc.nextInt();

        int tong = a+b;
        System.out.println(a+" + "+b+" = "+tong);
        int hieu = a-b;
        System.out.println(a+" - "+b+" = "+hieu);
        int thuong = a/b;
        System.out.println(a+" / "+b+" = "+thuong);
        int nhan = a*b;
        System.out.println(a+" * "+b+" = "+nhan);
        int sodu = a%b;
        System.out.println(a+" % "+b+" = "+sodu);
    }
}