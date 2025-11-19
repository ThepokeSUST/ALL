

abstract class A{
    int a;
    int b;
    void m(){
        System.out.println("this is m() from A class");
    }
    private void n(){
        System.out.println("this is private n() from A class");
    }
   abstract void show();
}
public class anony {
    public static void main(String[] args) {
          A a= new A(){
           int  a=4;
           void show(){
            System.out.println(a);
           }
          };

          System.out.println(a.a);
          a.show();
          System.out.println();
          a.m();

    }
}
