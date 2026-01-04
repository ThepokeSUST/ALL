import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import java.util.concurrent.locks.Lock;

class Counter {

    int a;

    Counter() {
        a=0;
    }

    final ReadWriteLock rwlock = new ReentrantReadWriteLock();
    final Lock rlock = rwlock.readLock();
  final Lock wlock= rwlock.writeLock();

    void write() {
        wlock.lock();
        try{
            System.out.println(Thread.currentThread().getName());
            this.a++;
            Thread.sleep(50);
        }
        catch(Exception e){

        }
        finally{
            wlock.unlock();
        }

    }
    void read(){
          
         rlock.lock();
         try{
            System.out.println(Thread.currentThread().getName()+a);
         }
         catch(Exception e){

         }
         finally{
            rlock.unlock();
         }
    }

}

public class ReadWriteLocking {
    public static void main(String[] args) {
        Counter c=new Counter();
        Thread th1= new Thread(()->{
                 for(int i=0;i<20;i++){
                    //System.out.println();
                    c.read();
                 }
        },"Reading1 ");
          Thread th2= new Thread(()->{
                 for(int i=0;i<20;i++){
                    //System.out.println();
                    c.read();
                 }
        },"Reading2 ");

        Thread th3=new Thread(()->{
            for(int i=0;i<20;i++)
                c.write();

        },"Writing ");

         th3.start();
     th1.start();
     th2.start();
    

   try{
      th1.join();
     th2.join();
     th3.join();
   }
   catch(Exception e){

   }
    }



}