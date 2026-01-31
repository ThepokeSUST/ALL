



public class second {
       public static void main(String[] args) {
               

        Runnable task =()->{

            boolean flag=false;
             
              for(int i=0;i<100;i++){
                System.out.println(Thread.currentThread().getName()+"== "+i);
                 try{
                    Thread.sleep(1000);
                if(i==1)
                {
                   try{
                     Thread.sleep(5000);
                   }
                   catch(Exception e){
                    System.out.println("Interrupted inner");
                   }
                }

                 }
                 catch(Exception e){
                    System.out.println("Interrupted outter"+Thread.currentThread().getName());
                    
                 }
              }
              for(int i=0;i<100;i++)
                System.out.println("New Section");
        };


        Thread th1=new Thread(task,"1st");
        th1.start();


        try{
            
           
           Thread.sleep(2000);
            th1.interrupt();
        
        }
        catch(Exception e){

        }

          for(int i=0;i<100;i++){
           System.out.println("main .......");
          }

       }
}
