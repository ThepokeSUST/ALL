

class A{
       int a=90;
       static int b=990;

       void m(){
        System.out.println("m() of class A"+" "+a);

       }

       class B{
           int a=89;

           void n(){
               System.out.println("this is n() from B "+" "+a);
            //    System.out.println(a+" ");
               m();
               
           }
       } 
}

public class nestedClass {
      
    public static void main(String[] args) {
           
           A a=new A();
           A.B b= a.new B();

        //    System.out.println(b.a);
        //    System.out.println();
        a.m();
        b.n();
    }
}
