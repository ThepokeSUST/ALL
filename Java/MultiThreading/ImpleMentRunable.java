import java.lang.Runnable;



class A implements Runnable{

    @Override
    public void run() {
        
         for(int i=0;i<60;i++){
            // System.out.print(Thread.get);
            System.out.print(Thread.currentThread().getName()+" ");
            System.out.println(i);
         }
    }
     
}

public class ImpleMentRunable {
   public static void main(String[] args) {
             
        A a=new A();
        A b= new A();

        Thread th1=new Thread(a);
        Thread th2=new Thread(b);
        th1.start();
        th2.start();

   }    
}
