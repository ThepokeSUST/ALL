

class A{

    

}
public class factorial {
  
    static int fact(int a){
        try{
             Thread.sleep(1000);
        }
        catch(InterruptedException ie){
            Thread.currentThread().interrupt();          
        }
        int ans=1;
          for(int i=1;i<=a;i++){
              ans*=i;
          }
          return ans;
     }
     public static void main(String[] args) {
        
        long l=System.currentTimeMillis();
        int n=10;
        for(int i=1;i<=n;i++){
           System.out.println(fact(i));
        }
        System.out.println();
        System.out.println("Time "+ (System.currentTimeMillis()-l));

        System.out.println();
        l=System.currentTimeMillis();
        Thread th[]=new Thread[n+1];
        for(int i=0;i<=n;i++){
            int fi=i;
           th[i]=new Thread(

            ()->{
                 int ans=fact(fi);
                 System.out.println(ans);
            }
           );
           th[i].start();
        }
        for(int i=0;i<=n;i++){
            try {
                th[i].join();
            } catch (InterruptedException e) {
              
                 Thread.currentThread().interrupt();
            }
        }

        
        System.out.println();
        System.out.println("Time "+ (System.currentTimeMillis()-l));

     }    
}
