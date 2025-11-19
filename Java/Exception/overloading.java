import java.io.IOException;

class A{
     
    void m()throws IOException{

    }
    void m(int a) throws ArithmeticException{

    }
    void n() throws Exception{

    }
}

class B extends A{
           void m(int a) throws RuntimeException{

           }
           void m()throws ArithmeticException{
            
           }

           void n()throws Exception{

           }

}


public class overloading {
      
    public static void main(String[] args) {
        A a=new A();
        try {
            a.m();
        } catch (IOException e) {
          
            e.printStackTrace();
        }

        B b=new B();
        try {
            b.m();
        } catch (RuntimeException e) {
            
            e.printStackTrace();
        }
        try {
            b.m(9);
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        try {
            b.n();
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
