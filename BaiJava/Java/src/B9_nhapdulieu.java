import java.util.Scanner;

public class B9_nhapdulieu {
    public static void main(String[] args) 
    {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("nhap vao ho ten : ");
            String hovaten = sc.nextLine();
            System.out.println("nhap ma sinh vien : ");
            long masinhvien = sc.nextLong();
            System.out.println("diem thi : ");
            float diemthi = sc.nextFloat();
            System.out.println("===============================");
            System.out.println("ho va ten : "+hovaten);
            System.out.println("ma sinh vien : "+masinhvien);
            System.out.println("diem thi : "+diemthi);
        }
    }
}
