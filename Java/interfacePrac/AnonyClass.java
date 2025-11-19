


class A{
    void m(){
        System.out.println("this is m method from class A");
    }
    int a=9;
}

public class AnonyClass {
      
    public static void main(String[] args) {
          A aa= new A(){
               int bb=90;
               int a=89;
               void m(){
                 System.out.println("this is m from anonymous class "+a+" "+this.a+" "+bb);
                 System.out.println("a from class A "+super.a);
               }
          };   
          System.out.println(aa.a+" "+aa.a);
          aa.m();    
    }
}
