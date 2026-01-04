import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.Future;

public class Futuretest {
     static void m(){
        try{
            Thread.sleep(2000);
            System.out.println("method m()");
        }
        catch(InterruptedException ie){

        }

     }
     public static void main(String[] args) {

        ExecutorService executor= Executors.newFixedThreadPool(10);

        executor.submit(()->{System.out.println("OK");});

        for(int i=0;i<10;i++){
            // m();
            executor.submit(()->{
                m();
            });
        }

        executor.shutdown();
        try {
            while(!executor.awaitTermination(1, TimeUnit.MICROSECONDS)){
                
            }
        } catch (InterruptedException e) {
           
            e.printStackTrace();
        }
        System.out.println();
        executor=Executors.newFixedThreadPool(5);
        Future<?> integer=executor.submit(()-> {
            try{
                Thread.sleep(2999);

            }
            catch(Exception e){

            }

            return 33333;
        });
        System.out.println(integer);
 executor.shutdownNow();

        System.out.println(integer.isDone());
        try {
            System.out.println(integer.get());
        } catch (InterruptedException e) {
          
        } catch (ExecutionException e) {
           
            e.printStackTrace();
        }

        System.out.println(integer.isDone());
        
       
        System.out.println(executor.isShutdown());

     }    
}
