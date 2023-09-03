package BaiJava;

import java.util.Scanner;

public class B24_thapphan_sang_nhiphan {
    public static void main(String[] args) {
        int n;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("nhap vao so nguyen n > 0 : ");
            n = sc.nextInt();
        }
        String nhiphan = "";
        while (n>0) 
        {
            nhiphan = (n%2) + nhiphan;
            n = n/2;            
        }
        System.out.println("so he nhi phan la "+nhiphan);
    }
}
