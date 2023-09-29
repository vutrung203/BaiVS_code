package BaiJava;

public class B34_equals_hascode {
    private int day;
	private int month;
	private int year;
	
	public B34_equals_hascode(int day, int month, int year) {
		if (day >= 1 && day <= 31) {
			this.day = day;
		} else {
			this.day = 1;
		}
		if (month >= 1 && month <= 12) {
			this.month = month;
		} else {
			this.month = 1;
		}
		if (year >= 1) {
			this.year = year;
		}else {
			this.year = 1;
		}
	}

	public int getDay() {
		return day;
	}

	public void setDay(int day) {
		if (day >= 1 && day <= 31) {
			this.day = day;
		} 
	}

	public int getMonth() {
		return month;
	}

	public void setMonth(int month) {
		if (month >= 1 && month <= 12) {
			this.month = month;
		}
	}

	public int getYear() {
		return year;
	}

	public void setYear(int year) {
		if (year >= 1) {
			this.year = year;
		}
	}

	@Override
	public String toString() {
		return "MyDate [day=" + day + ", month=" + month + ", year=" + year + "]";
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + day;
		result = prime * result + month;
		result = prime * result + year;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (this.getClass() != obj.getClass())
			return false;
		B34_equals_hascode other = (B34_equals_hascode) obj;
		if (this.day != other.day)
			return false;
		if (this.month != other.month)
			return false;
		if (this.year != other.year)
			return false;
		return true;
	}

    public static void main(String[] args) {
        B34_equals_hascode md1 = new B34_equals_hascode(15, 5, 2025);
		B34_equals_hascode md2 = new B34_equals_hascode(11, 1, 2021);
		B34_equals_hascode md3 = new B34_equals_hascode(15, 5, 2025);
		
		System.out.println(md1); // 15/5/2021
		System.out.println(md2);
		System.out.println(md3);
		
		System.out.println("md1 so sanh bang md2: "
		                        + md1.equals(md2));
		
		System.out.println("md1 so sanh bang md3: "
                                + md1.equals(md3));
		
		System.out.println("Hashcode md1 " + md1.hashCode());
		System.out.println("Hashcode md2 " + md2.hashCode());
		System.out.println("Hashcode md3 " + md3.hashCode());
	}
    
}
