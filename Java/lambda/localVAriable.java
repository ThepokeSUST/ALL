
interface inA{
      void m();
}

public class localVAriable {

    int classA=9;
    static int classB=8;
    public static void main(String[] args) {
           
        inA a=()->System.out.println("lambda 1");

        a.m();

        inA b=()->{
          
             int vara=90;
             System.out.println(vara);
             classB=888;
        };

        b.m();

        localVAriable newLocalVAriable=new localVAriable();
        newLocalVAriable.non();
        System.out.println(newLocalVAriable.classA);


        System.out.println("for anonymous clss");

        inA ano=new inA() {
             static int b=9;
             int a;
            @Override
            public void m() {
              classB=9000;
            }
            
        };

        
    }
    void non(){
        inA a=()->{
            int i=90;
            System.out.println(classA);
            int vara=99;
            System.out.println(vara);
            classA=999;
            classB=111;

        };
        a.m();
        System.out.println("static classB "+classB);
    }
}
