import java.util.concurrent.locks.ReentrantLock;
import java.util.concurrent.locks.Lock;
class A implements Runnable{
        
      Lock lock=new ReentrantLock();
     @Override
     public void run(){
        mainDoor();
        
     }

     void mainDoor(){
         lock.lock();
         try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
          
            e.printStackTrace();
        }
        System.out.println("this is the main Door");
        bathroomDoor();
        lock.unlock();
     }
     void bathroomDoor(){
        lock.lock();
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
          
            e.printStackTrace();
        }
        System.out.println("this is the bathroom Door");
        lock.unlock();
     }
}

public class reentrantLock {
     public static void main(String[] args) {
         
     }    
}
