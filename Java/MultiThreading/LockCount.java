import java.util.concurrent.locks.Lock;
import  java.util.concurrent.locks.ReentrantLock;
class A  extends Thread{
      
    Lock lock=new ReentrantLock();
      

    public void run(){
         System.out.println("enter");
          m();
          System.out.println("end");
    }

    void m(){
        lock.lock();
        System.out.println("this is m"+ Thread.currentThread().getName());
        n();
        lock.unlock();

    }
    void n(){
        lock.lock();
        System.out.println("this is n()");
        lock.unlock();

    }
}

class B extends Thread{
       
     A a;
     B(A a){

        this.a=a;
     }

     public void run(){
        System.out.println(Thread.currentThread().getName()+"Start");
        a.m();
        System.out.println(Thread.currentThread().getName()+"End");
     }
}

public class LockCount {
     public static void main(String[] args) {
        A a =new A();
     
        a.start();
        try {
            a.join();
        } catch (InterruptedException e) {
          
            e.printStackTrace();
        }
        System.out.println(".............");
        a=new A();
        B b1=new B(a);
        B b2=new B(a);
        b1.start();
        b2.start();

     }
}
