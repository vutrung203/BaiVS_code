package BaiJava;

public class B30_MyDate {
    private int day;
	private int month;
	private int year;
	
	public B30_MyDate(int d, int m, int y) {
		this.day = d;
		this.month = m;
		this.year = y;
	}
	
	public void printDay() {
		System.out.println("Day: "+this.day);
	}
	public void printMonth() {
		System.out.println("Month: "+this.month);
	}
	public void printYear() {
		System.out.println("Year: "+this.year);
	}
	public void printDate() {
		System.out.println("Date: "+this.day+"-"+this.month+"-"+this.year);
	}
    public static void main(String[] args) {
		//int d;
		B30_MyDate md = new B30_MyDate(25, 2, 2029);
		md.printDay();
		md.printMonth();
		md.printYear();
		md.printDate();
	}
}

