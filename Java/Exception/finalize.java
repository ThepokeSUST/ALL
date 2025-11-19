


class A{
    

    @Override
    protected void finalize(){
        System.out.println("A's finalized method");
    }
    
}
public class finalize {
    public static void main(String[] args) {
           
           A a=new A();
           System.out.println(a.hashCode());
          a=null;
          finalize f=new finalize();
          System.out.println(f.hashCode());
          f=null;
          System.gc();
    
          try{
           Thread.sleep(2000);
          }
          catch(Exception e){

          }
          finally{

          }
    }
    @Override
    protected void finalize(){
        System.out.println("finalized method called");
        System.out.println("''''''''''");
    }
}
