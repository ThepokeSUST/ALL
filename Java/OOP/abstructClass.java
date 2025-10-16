

abstract class A{

    int ia;
    static int sa;

    A(){
        System.out.println("A's constructor");
    }
   abstract  void m();
   void n(){
    System.out.println("this is n from A");
   }

}

class B extends A{
      
       void m(){
  System.out.println("this is m from B's");
      }
      void c(){
        System.out.println("this is c from B's");
      }
}
public class abstructClass {
    public static void main(String[] args) {
          B b=new B();
          b.m();
          b.n();
          A a=b;
          a.m();
          a.n();
          b.c();
        //   a.c();
    }
}

