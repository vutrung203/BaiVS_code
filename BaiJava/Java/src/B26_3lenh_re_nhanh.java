import java.util.Scanner;

public class B26_3lenh_re_nhanh {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap n : ");
        n = sc.nextInt();

        int out,in=0;
        for (out = 0; out < n ; out++) 
        {
            for (in = 0; in < n; in++) 
            {
                if (in>10) 
                {
                    break;  
                }     
            } 
            System.out.println("trong vong lap out = "+out+" = in "+in); 
        }
        System.out.println("ngoai vong lap out = "+out+" = in "+in); 
        System.out.println("========================");
        outer : for (out = 0; out < n ; out++) 
        {
            for (in = 0; in < 20; in++) 
            {
                if (in>10) 
                {
                    break outer;  
                }     
            } 
            System.out.println("trong vong lap out = "+out+" = in "+in); 
        }
        System.out.println("ngoai vong lap out = "+out+" = in "+in); 
        System.out.println("========================");
        int max = 100;
        for (int i = 0; i < max; i++) 
        {
            if (i<50) 
            {
                continue;   
            }    
            System.out.println(i);
        }
        System.out.println("========================");
        loop : for (int i = 0; i < max; i++) 
        {
            if (i<50) 
            {
                continue loop;   
            }    
            System.out.println(i);
        }
        System.out.println("END");

    }
}
