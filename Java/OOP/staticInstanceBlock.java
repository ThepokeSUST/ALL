

class A{
     int ia;
     static int sa;
     A(){
        System.out.println("this is A constructor");
        // System.out.println(ia);
        // System.out.println(sa);
     }
     static{
        System.out.println("this is A's 2nd static block");
     }

     {
        System.out.println("this is A's 3rd instance block");
     }
     A(int a){
        System.out.println("this is our A parameterized constructor");
     }
     void m(){
        System.out.println("m from A");
     }
     {

        System.out.println("this is A's instance block");
        ia=999;
     }
     {
        System.out.println("this is A's 2nd instance block");
     }
     static{
        System.out.println("this is A's static block");
        sa=1111;
     }
};

class B extends A{

    B(){
        super();
        // this(3);
        System.out.println("this is B constructor");
    }
    B(int a){
        super(3);
        // this();
        System.out.println("this is parameterized B constructor");
    }
    {
        System.out.println("this is B's instance block");
    }
    {
        System.out.println("this is B's 2nd instance block");
    }

    static{
        System.out.println("this is B's Static block");
    }
    void m(){
        System.out.println("m from B");
    }
}



class C{
      C(){
        System.out.println("this is C's Constructor");
      }

      final void m(){
        System.out.println("this is final m method from C");
      }
}


final class D extends C{
      

    D(){
        System.out.println("D's Default cons");
    }
    // void m(){

    // }
}
// class E extends D{

// }

class E {

}
class F{

}
class g extends f,e{
    
}

public class staticInstanceBlock {
       
    public static void main(String[] args) {
        // A a=new A();

        // B b=new B();

        // System.out.println("ccccccc");
        // B bb=new B(7);

        // a.m();
        // bb.m(); 


        // A a=new A();
        // A a2=new A();
        // A a;
        // a=new A();

        
        // B b=new B();
          
        D d=new D();
        d.m();

    }
}
