package Protected2;

import Protected1.protected1;

class A extends protected1{
      

    void method1(){
        System.out.println(this.proa);
        System.out.println(proa);
        // System.out.println(this.dea);//error
    }
}

public class protected2 {

    static void test(int a, int b) {
        System.out.println("without");
     }
     static void test(int... a) { 
        System.out.println("with");
     }


    public static void main(String[] args) {

          System.out.println("Command Line Argument length "+args.length);
          protected1 p=new protected1();
        //   System.out.println(p.proa);//error
        // System.out.println(p.dea);//error
        A a=new A();
        // System.out.println(a.dea);//error
        // System.out.println(a.proa);//error
        System.out.println();
        a.method1();


        test(10, 20);   // Which one? -> int,int is chosen (more specific)

    }
}
