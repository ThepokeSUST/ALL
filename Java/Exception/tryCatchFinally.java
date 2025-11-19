import java.util.Scanner;

public class tryCatchFinally {
      public static void main(String[] args) {
           

        int a,b;
        Scanner sc=new Scanner(System.in);
        a= sc.nextInt();
        b=sc.nextInt();
        try{
            int c=a/b;
        }
        catch(Exception e){

        }
        finally{
            System.out.println("finally block");
        }
         try{
           System.out.println("next try");
         }
         finally{
            System.out.println("finally");
         }

       
      }
}
