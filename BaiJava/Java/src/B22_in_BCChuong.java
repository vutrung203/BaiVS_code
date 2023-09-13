import java.util.Scanner;

public class B22_in_BCChuong {
    public static void main(String[] args) {
        int n;
        try (Scanner sc = new Scanner(System.in))
        {
            System.out.println("nhap vao n : ");
            n = sc.nextInt();
        }
        for (int i = 0; i <= n; i++) 
        {
            for (int j = 1; j <= n; j++) 
            {
                System.out.println(i+" x "+j+" = "+(i*j));   
            }
            System.out.println("==============="); 
        }
    }
}