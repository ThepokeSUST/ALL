


class A{
     

    synchronized void  m(){
        System.out.println(Thread.currentThread().getName()+ "in method m()");
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
           
            e.printStackTrace();
        }
        System.out.println("end of m()");
        
    }
     void n(){
         System.out.println(Thread.currentThread().getName()+" in method n()");
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
           
            e.printStackTrace();
        }
        System.out.println("end of n()");

    }
}
public class deadlock {
       public static void main(String[] args) {


        A a=new A();
        
        Thread th1= new Thread(()->{
              a.m();   
        },"One");
        Thread th2=new Thread(()->{
            a.n();
        },"Two");


        th1.start();
        th2.start();

                    
       }
}
