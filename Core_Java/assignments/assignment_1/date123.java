class date1 {
    int day;
    int month;
    int year;

    void setDay(int i) {
        this.day = i;
    }

    void setMonth(int i) {
        this.month = i;
    }

    void setYear(int i) {
        this.year = i;
    }

    void display() {
        System.out.println("Day is: " + this.day);
        System.out.println("Month is: " + this.month);
        System.out.println("Year is: " + this.year);
    }
}

class Test1 {
    public static void main(String[] args) {

        date1 d1;
        d1 = new date1();

        d1.setDay(1);
        d1.setMonth(10);
        d1.setYear(2026);

        d1.display();
    }
}