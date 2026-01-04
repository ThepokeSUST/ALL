


public class methodsOfThread {
     public static void main(String[] args) throws InterruptedException {
        char ch=67;
          Thread th1= new Thread(()->{
                 
            for(int i=0;i<10;i++){
                System.out.println(Thread.currentThread().getName()+" "+Thread.currentThread().getName());
                System.out.println();
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                  
                    e.printStackTrace();
                }
            }
          },"Thread"+ch++);        
         System.out.println(th1.getState());
          th1.start();
          System.out.println(th1.getState());
          th1.join();
          System.out.println(th1.getState());
        

          


     }
}
