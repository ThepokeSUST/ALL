


class A extends Thread{
        
      void m(){
         System.out.println("this is method m");
         for(int i=0;i<10000;i++){
            System.out.println("....... "+i);
         }
      }
       String name;
       A(String name){
     this.name=name;
       }
      @Override
      public void run(){


       
            System.out.println(name+" "+Thread.currentThread().getName());
        
      }
}

public class first{
      
    public static void main(String[] args) {
          
            A a=new A("one");
            A aa=new A("two");
            A aaa=new A("Three");
            a.start();
            aa.start();
            aaa.start();
    }
}