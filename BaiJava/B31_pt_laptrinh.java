package BaiJava;

public class B31_pt_laptrinh {
    //private String tenCaPhe;
    private double giatien1kg;
    private double khoiluong;

    public B31_pt_laptrinh(String ten , double gia , double kl)
    {
        //this.tenCaPhe = ten;
        this.giatien1kg = gia;
        this.khoiluong = kl;
    }
    public double tinhtongtien()
    {
        return this.giatien1kg * this.khoiluong;
    }
    public boolean ktrkhoiluong(double kl)
    {
        // if (this.khoiluong>kl) 
        // {
        //     return true;            
        // }
        // else
        // {
        //     return false;
        // }
        return this.khoiluong>kl;
    }
    public boolean ktrtongtienhon500k()
    {
        return this.tinhtongtien()>500000;
    }
    public double giamgia(double x)
    {
        if (this.tinhtongtien()>500000) 
        {
            return (x/100)*this.tinhtongtien();   
        }
        else
        {
            return 0;
        }
    }
    public double giasaukhigiam(double x)
    {
        return this.tinhtongtien() - this.giamgia(x);
    }
    public static void main(String[] args) {
        B31_pt_laptrinh hd = new B31_pt_laptrinh("Trung Nguyen", 100000, 1.5);
        B31_pt_laptrinh hd2 = new B31_pt_laptrinh("Trung Nguyen", 100000, 5.5);
        System.out.println("tong tien : "+hd.tinhtongtien());
        System.out.println("tong tien : "+hd2.tinhtongtien());
        System.out.println("kiem tra khoi luong > 2kg "+hd.ktrkhoiluong(2));
        System.out.println("kiem tra khoi luong > 1kg "+hd.ktrkhoiluong(1));
        System.out.println("kiem tra tong tien > 500k "+hd.ktrtongtienhon500k());
        System.out.println("giam gia cua HD : "+hd.giamgia(10));
        System.out.println("giam gia cua HD2 : "+hd2.giamgia(10));
        System.out.println("sau giam gia cua HD : "+hd.giasaukhigiam(10));
        System.out.println("sau giam gia cua HD2 : "+hd2.giasaukhigiam(10));
    }
}
