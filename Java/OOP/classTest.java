


class A{
      
    A(){
        System.out.println("A's default constructor");
    }

    class B{
        B(){
            System.out.println("class A.B's default constructor");
        }
    }
}

public class classTest {
    public static void main(String[] args) {
        A a=new A();
    }
}
