public class bank implements Runnable  {
     int tk=100;
    public void run(){
        //    withdraw(50);
           withdraw(80);
    }
    
   synchronized void withdraw(int a){

        if(tk-a>=0){
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
               
                e.printStackTrace();
            }
        tk=tk-a;
        System.out.println("possible "+a+" tk left "+tk);

        }
        else System.out.println("Impossible");
    }
     public static void main(String[] args) {
          bank b=new bank();
          Thread th1=new Thread(b);
          Thread th2=new Thread(b);
          th1.start();
          th2.start();
     }    
}

