

class A{
    static int a=99;
    void m(){
        System.out.println("in m() A");

    }
   final void n(){
        System.out.println("this is n() in A");
    }
}
class B extends A{
    int a=88;
    static int b=77;
        void m(){
        System.out.println("in m() B");
    }
    void nn(){
        System.out.println("this is nn() in B");
    }
    // void n(){ }//cant me overriden
    void n(int a){

    }

}
final class finalA extends B {

     int a;    
}
// class extentfinalA extends finalA{}//cant extends final class finalA
public class classprec {
         public static void main(String[] args) {

            B b=new B();
            b.m();
            A a=b;
            a.m();
            b.n();
            b.nn();
            a.n();
            System.out.println(b.a);
            System.out.println(b.b);

            finalA fa=new finalA();
            fa.m();
            
         }    
}
