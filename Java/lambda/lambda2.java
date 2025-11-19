import java.io.IOException;

interface A{
    void m()throws Exception;
}
interface ain{
    void m() throws IOException;
}
class AA implements A{
      public void m(){

      }
}
class BB implements ain{

    @Override
    public void m() throws RuntimeException {
       
       
    }

    void methodPass(A a){
        System.out.println("''''''''''''");
        try {
            a.m();
        } catch (Exception e) {
            e.printStackTrace();
        }
        System.out.println("llllll");
    }
    
}
public class lambda2 {
    public static void main(String[] args) {
        AA a=new AA();
        a.m();
        BB b=new BB();
        b.m();
        b.methodPass(()->{System.out.println("okok");});

    }
}
