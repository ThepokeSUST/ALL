import java.io.File;
import java.lang.Exception;


class A{
    void m(){
        
        int a=4;
        int b=0;
        int c=a/b;
    }
}
public class checkedExp {
    public static void main(String[] args) {
         

        try{
            // throw new Exception();
            new A().m();
        }
        catch(Throwable t){
            t.printStackTrace();
        }
        System.out.println("end of the programm");
        
    }
}
