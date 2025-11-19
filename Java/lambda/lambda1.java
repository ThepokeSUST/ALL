
interface A{

    void m();
}

interface B{
    int add(int a,int b);
}
interface C{
    int m();
}
public class lambda1 {
    public static void main(String[] args) {
           
           A a= ()-> System.out.println("this is m()");
           a.m();

           B b=(x,y)-> x+y;

           System.out.println(b.add(2, 3));
           C c=() -> {
            System.out.println("dddddddddddddddddd");
            return 2;
           };

           System.out.println(c.m());

    }
}
