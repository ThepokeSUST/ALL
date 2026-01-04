
import java.lang.Thread;
class CoookingTask extends Thread{
           
       @Override
       public void run(){
        System.out.println("this is Run mthod");
        for(int i=0;i<60;i++){
            System.out.println(i);
        }
       }
}
public class ExtendsThread {
        public static void main(String[] args) {
            
             new CoookingTask().start();
             new CoookingTask().start();
             
        }
}
