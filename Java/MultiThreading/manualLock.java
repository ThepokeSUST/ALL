import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

class Count{
       
       int a;
       Count(int a){
        this.a=a;
        
       }
       private final Lock lock=new ReentrantLock();



        void incre(){
            
            // if(lock.tryLock()){
            //     this.a++;
            //     lock.unlock();
            // }
            // else{
            //     System.out.println(Thread.currentThread().getName()+" Not Lock");
            // }
           lock.lock();//same as Synchronized
           this.a++;
           lock.unlock();

         
        
       }
       void show(){
        System.out.println(this.a);
       }

}



class A extends Thread{
       
    Count c;

    A(Count c){
        this.c=c;
    }
    @Override
    public void run(){
          for(int i=0;i<1500;i++) 
            c.incre();

    }
}
public class manualLock {
    
     public static void main(String[] args) throws InterruptedException {
          Count c=new Count(0);
          A a1=new A(c);
          A a2=new A(c);
          a1.start();
          a2.start();
          a1.join();
          a2.join();

          c.show();


     }    
}
