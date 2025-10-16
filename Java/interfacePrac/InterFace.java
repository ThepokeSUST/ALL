

interface A{
      
    int a=9;
    public static final int b=90;
    void m();
    static void n(){
        System.out.println("static method of A interface");
    }
    default void p(){
        System.out.println("this is default p method of A interface");
    }
    private void q(){
        System.out.println("this is the private method of A interface");
    }

}

class classA{
      classA(){
        System.out.println("classA");
      }
}

class classB extends classA implements A{
    classB(){
        System.out.println("classB");
    }
   public  final  void m(){
      System.out.println("m from classB");
    }
}

// class classC implements A extends classB{
//     classC(){
//         System.out.println("classC");
//     }
// }


class classC extends classB{

    // public void m(){
    //   System.out.println("m from classC");
    // }
    
}
public class InterFace {
    public static void main(String[] args) {
        //  System.out.println(A.a);
        //  System.out.println(A.b);

        //  classB b=new classB();





        classB b= new classC();
        b.m();
        classC c=(classC)b;
        c.m();
         
    }    
}
