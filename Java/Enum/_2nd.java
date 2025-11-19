
import java.lang.Enum;

enum Days {

    day1, day2, day3, day4, day5, day6, day7;

    Days() {
        System.out.println("Default");
        select();
    }

    void m(int or) {
        System.out.println("method m for " + or);
    }

    void select() {

        switch (this) {
            case day1:
                m(this.ordinal());
                break;

            case day2:
                m(this.ordinal());
                break;
            case day3:
                m(this.ordinal());
                break;
            case day4:
                m(this.ordinal());
                break;
           case day5:
                m(this.ordinal());
                break;
           case day6:
                m(this.ordinal());
                break;
           case day7:
                m(this.ordinal());
                break;               
        }
    }
}

public class _2nd {

    public static void main(String[] args) {
        Days d = Days.day1;

        d.select();

    }

}
