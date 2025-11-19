interface A{
      int a=90;
      void m();
}

interface B{
    void n();
}
public class LambdaAndVaribale {
    int istna=90;
    static int stca=90;
    int i;

    public static void main(String[] args) {
            
        int lcla=89;

        A a=()->{
         //   i=90;
             int istna=90;
             int b=90;

             System.out.println("lambda expr");
             istna=9;
             new LambdaAndVaribale().m();
             System.out.println(LambdaAndVaribale.stca);
          
        };
        a.m();
    }    


    void m(){
         
          A a=()->{
                // int a=90;
                i=80;
                istna=89;
                int newa=90;
                int istna=90;
                this.istna=999;
                stca=90;
                istna=10;
                System.out.println("ok");

          };
          a.m();

          int bb=90;
          final int cc=9;
         System.out.println(cc);
          B b= ()->{
            //  bb=88;
           int aaa= cc;
           aaa=i;

          };


    final int j=0;

          B anob=new B(){

            @Override
            public void n() {
               istna=90;
               int istna=8;
               istna=80;
               stca=3;
               stca=j;
            }
           
          };
    }
}
