


public class test1{
      
     public static void main(String[] args) {
            

            try{
                throw new RuntimeException("Thepoke");
            }
            catch(Exception e){
                     System.out.println(e);
                     System.out.println(e.getMessage());
                     e.printStackTrace();
            }
            finally{
              System.out.println("Finally block");
            }
     }
}