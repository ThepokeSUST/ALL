

class A extends Thread{
    
    B b;
    A(B b){
    this.b=b;
    }
    public void run(){
          b.m();
          System.out.println(Thread.currentThread().getName());
    }
}



class B{
    void m(){
        System.out.println(Thread.currentThread().getName());

    }
}


public class third {
    public static void main(String[] args) {
           
          B b=new B();
          b.m();

          A a=new A(b); 
          a.start();
    }
}
