



public class Chained {

     void m(){
          
          try{
            NullPointerException n=new NullPointerException("Null");
            n.initCause(new ArrayIndexOutOfBoundsException("Out of index"));
            throw n;
          }
          catch(NullPointerException n){
            throw n;
          }
     }
     void n(){
        throw new ArithmeticException();
     }
     public static void main(String[] args) {
            
        Chained ch=new Chained();

        try{
            ch.m();
        }
        catch(Exception e){
            e.printStackTrace();
            System.out.println();
            System.out.println(e);
            System.out.println(e.getCause());

        }

        try{
            ch.n();
        }
        catch(Exception e){
            System.out.println(e);
            System.out.println(e.getCause());
        }
     }   
}
