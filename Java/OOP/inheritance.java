


class A{
     

    private void m(){
        // super.m();
        System.out.println("m from A");
    }
}

class B extends A{
      
    void m(){
        // super.m();
        System.out.println("m from B");
    }
}

public class inheritance {
      public static void main(String[] args) {
        B b= new B();
        b.m();
        A a=b;
        // a.m();
      }
}
