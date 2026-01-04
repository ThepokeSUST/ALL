

class A  extends Thread{
       
    @Override 

    public void run(){
        for(int i=0;i<1000;i++){
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
               System.out.println("Thread A interrupted");
               // e.printStackTrace();
            }
            System.out.println(i);
        }
    }
}



public class DemonExample {
     public static void main(String[] args) {

        A a=new A();
        a.setDaemon(true);
        a.start();
       
        
        for(int i=0;i<200;i++){
            System.out.println("ok");
        }
        System.out.println("End");
        
     }   
}
