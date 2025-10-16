

interface inA{
    int sa=999;
      void m();
      static void n(){
        System.out.println("static inA");
        // q();
      }
      default void p(){
        System.out.println("default inA");
        q();
      }
      private void q(){
        System.out.println("private inA");
      }
}

interface inB{
    int sa=888;
     void m();
       static void n(){
        System.out.println("static inB");
        // q();
      }
      default void pp(){
        System.out.println("default inB");
        q();
      }
      private void q(){
        System.out.println("private inB");
      }
     
}

class inAB implements inA,inB{
       public void m(){
        System.out.println("m in class inAB");
        // System.out.println(sa);
       }
}
public class interfaceWithInheritance {
    public static void main(String[] args) {
        inAB ab=new inAB();
        ab.m();
        inA ina=ab;
        inB inb=ab;
        ina.m();
        inb.m();

        // int i=ab.sa;
        // ab.n();
        // System.out.println(i);
        
    }
}
