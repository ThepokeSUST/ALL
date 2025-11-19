class A{
      
    void m(){
         try{
            throw new ArithmeticException();
         }
         catch(RuntimeException e){
            throw new NullPointerException();
         }
         catch(Exception e){
            throw new ArrayIndexOutOfBoundsException();
         }
         finally{
            System.out.println("in m method finally block");
         }
        //  System.out.println("m() last");//unreachable code
    }
}

public class ExceptionInCatch {
    public static void main(String[] args) {
                   
        try{
          new A().m();
        }
        catch(Exception e){
            e.printStackTrace();
        }
        finally{
            System.out.println("main method finally block");
        }
        System.out.println("main method last");
    }
}
