import java.io.IOException;

class A{
    void m(){

    }
    void n() throws IOException{

    }

    void nn() throws Exception{

    }
}
public class exceptiontest {
     public static void main(String[] args) {
         A a=new A(){
             void n()throws ClassCastException{

             }
             void nn(){
                
             }
         };
     }
}
