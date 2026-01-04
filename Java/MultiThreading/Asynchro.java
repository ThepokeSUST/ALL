
// class Count{
//      int a=0;
//      Count(int a){
//         this.a=a;
//      }

//      synchronized void increase(){
//         this.a++;
//      }
//      void decrease(){
//         this.a--;
//      }
//      void show(){
//         System.out.println(a);
//      }

// }


// class A implements Runnable{
//       Count c;
//        A(Count c){
//         this.c=c;
//        }
       
//        public void run(){
//             for(int i=0;i<1500;i++){
//                 // try {
//                 //     Thread.sleep(100);
//                 // } catch (InterruptedException e) {
//                 //     e.printStackTrace();
//                 // }
//                 c.increase();
//             }
//        }
//        void show(){
//         c.show();
//        }

// }



// class B extends Thread{
          
         
//     public void run(){
//           int a=0;
//     }
    
// }

// public class Asynchro {
//       public static void main(String[] args) throws InterruptedException {
//                 A a=new A(new Count(0));
//                  Thread th1=new Thread(a);
//                  Thread th2=new Thread(a);
//                  th1.start();
//                  th2.start();
//                  th1.join();
//                  th2.join();

//                  a.show();
//                  System.out.println();
//                  int aa=0;

//                  for(int i=0;i<1000;i++)
//                      aa+=1;
                 
                 
                        
//       }
// }



import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

class Count {
    int a = 0;

    Count(int a) {
        this.a = a;
    }

    private final Lock lock = new ReentrantLock();  // manual lock

    void increase() {
        lock.lock();          // acquire lock manually
        try {
            this.a++;
        } finally {
            lock.unlock();    // MUST unlock in finally
        }
    }

    void decrease() {
        lock.lock();
        try {
            this.a--;
        } finally {
            lock.unlock();
        }
    }

    void show() {
    //    lock.lock();
        try {
            System.out.println(a);
        } finally {
          //  lock.unlock();
        }
    }
}

class A implements Runnable {
    Count c;

    A(Count c) {
        this.c = c;
    }

    public void run() {
        for (int i = 0; i < 1500; i++) {
            c.increase();
        }
    }

    void show() {
        c.show();
    }
}

class B extends Thread {
    public void run() {
        int a = 0;
    }
}

public class Asynchro {
    public static void main(String[] args) throws InterruptedException {

        A a = new A(new Count(0));

        Thread th1 = new Thread(a);
        Thread th2 = new Thread(a);

        th1.start();
        th2.start();

        th1.join();
        th2.join();

        a.show();  // should always print 3000

        System.out.println();

        int aa = 0;
        for (int i = 0; i < 1000; i++)
            aa += 1;
    }
}
