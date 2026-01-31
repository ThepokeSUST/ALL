


class A{
    void m(){};
}


interface in{
    void m();
}

class B extends A{
    void n(){};
}
public class test {
    public static void main(String[] args) {
           
          A a=new A();
           int b=8;
           b=899;
          A ano= new A(){
                  int a=90;

                  void m(){
                    System.out.println(a);
                    // System.out.println(b);
                    // b=80;
                  }
          };
 
          ano.m();

          B bb= new B(){
              void m(){
                System.out.println("BM");
              }
              void n(){
                System.out.println("BN");
              }
          };

          bb.m();
          bb.n();

          A aa=new B(){
              void m(){
                System.out.println("AM");
              }
              void n(){
                System.out.println("AN");
              }
          };
          aa.m();
        //   aa.n();

        in IN = ()->{
            System.out.println("OKAY");

            // throw new RuntimeException("okay");
            // throw new Exception();
        };

    //    try{
    //      IN.m();

    //     }
    //     catch( Exception e){
    //            System.out.println(e);
    //     }
    }
}
