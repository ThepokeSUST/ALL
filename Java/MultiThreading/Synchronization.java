

class count{
      
    int a;
    count(int a){
        this.a=a;
    }

    synchronized void  incre(){
        a++;
    }
    void show(){
        System.out.println(a);
    }
}

public class Synchronization {
    public static void main(String[] args) throws InterruptedException{
          
        count c=new count(0);

        Thread th1=new Thread(()->{
             for(int i=0;i<1000;i++){
                c.incre();
             }
        });
          Thread th2=new Thread(()->{
             for(int i=0;i<1000;i++){
                c.incre();
             }
        });

        th1.start();
        th2.start();
        th1.join();
        th2.join();
        c.show();

    }    
}
