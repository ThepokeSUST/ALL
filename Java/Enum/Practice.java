import java.lang.Enum;
 
enum Days  {
    Sat,Sun(),Mon(3),Tue,wed,Thu,Fri;
    int a;
    static int b;
    Days(){
        // super();
        System.out.println("Days default constructor");

    }

    Days(int a){
        // super();
        System.out.println("Days parameterized constructor");
        this.a=a;
    }

    void show(){
        System.out.println(a);
    }

}

public class Practice {
    public static void main(String[] args) {
         Days d1=Days.Sat;
        //  System.out.println(d1.show())
        d1.show();
        System.out.println(d1.b);
        System.out.println(Days.b);


    }
}
