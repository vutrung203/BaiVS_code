package BaiJava;

public class B32_pt_GET_AND_SET {
    private int day;
    private int month;
    private int year;

    public B32_pt_GET_AND_SET(int day,int month,int year)
    {
        if (day >= 1 && day <= 31) 
        {
            this.day = day;
        }
        else
        {
            this.day = 1;
        }
        if (month >= 1 && month <= 12) 
        {
            this.month = month;            
        }
        else
        {
            this.month = 1;
        }
        if (year >=1) 
        {
            this.year = year;   
        }
        else
        {
            this.year = 1;
        }
    }
    public int getDay()
    {
        return this.day;
    }
    public void setDay(int d)
    {
        if (d >= 1 && d <= 31) 
        {
            this.day = d;    
        }
    }
    public int getMonth()
    {
        return this.month;
    }
    public void setMonth(int m)
    {
        if (m >= 1 && m <= 12) 
        {
            this.month = m;    
        }
    }
    public int getYear()
    {
        return this.year;
    }
    public void setYear(int y)
    {
        if (y>=1) 
        {
            this.year = y;    
        }
    }
    public static void main(String[] args) {
        B32_pt_GET_AND_SET md = new B32_pt_GET_AND_SET(31, 1, 2021);
        System.out.println("day = "+md.getDay());
        md.setDay(35);
        System.out.println("day = "+md.getDay());
        md.setDay(30);
        System.out.println("day = "+md.getDay());

        System.out.println("month = "+md.getMonth());
        md.setMonth(13);
        System.out.println("month = "+md.getMonth());
        md.setMonth(5);
        System.out.println("month = "+md.getMonth());

        System.out.println("year = "+md.getYear());
        md.setYear(0);
        System.out.println("year = "+md.getYear());
        md.setYear(5);
        System.out.println("year = "+md.getYear());
        
    }
}
