package BaiJava;

import java.util.Scanner;

public class B27_try_catch {
    public static void main(String[] args) {
        int n=0;
        try(Scanner sc = new Scanner(System.in))
        {
            System.out.println("nhap vao so n : ");
            n = sc.nextInt();
        }
        catch (Exception e) 
        {
            System.out.println("nhap kh dung");
        }
        finally
        {
            System.out.println("Finally");
        }
        System.out.println("gia tri : "+n);
        System.out.println("ket thuc");
    }
}