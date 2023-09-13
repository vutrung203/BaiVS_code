import java.util.Scanner;

public class B16_ham_math {
    public static void main(String[] args) {
        double a,b;
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.println("nhap a : ");
            a = sc.nextDouble();
            System.out.println("nhap b : ");
            b = sc.nextDouble();
        }
        // gt tuyet doi
        System.out.println("|a| = "+Math.abs(a));
        //tim min
        System.out.println("min(a,b) = "+Math.min(a, b));
        //tim max
        System.out.println("max(a,b) = "+Math.max(a, b));
        //ham ceil
        System.out.println("ceil(a) = "+Math.ceil(a));
        // ham floor
        System.out.println("floor(a) = "+Math.floor(a));
        // can bac 2 sqrt
        System.out.println("sqrt(a) = "+Math.sqrt(a));
        // ham tinh a^b
        System.out.println("a^b = "+Math.pow(a, b));
        
        // // bai tap hinh tron
        // double r,dientich,chuvi;
        // try (Scanner ac = new Scanner(System.in)) 
        // {
        //     System.out.println("nhap ban kinh r : ");
        //     r = ac.nextDouble();
        // }
        // chuvi = 2*Math.PI*r;
        // System.out.println("chu vi = "+chuvi);
        // System.out.println("chu vi = "+Math.round(chuvi));
        // System.out.println("chu vi = "+Math.round(chuvi*100.0)/100.0);
        // // tinh dien tich
        // dientich = Math.PI*Math.pow(r,2);
        // System.out.println("dien tich = "+dientich);
        // System.out.println("dien tich = "+Math.round(dientich));
        // System.out.println("dien tich = "+Math.round(dientich*100.0)/100.0);
        
    }
}