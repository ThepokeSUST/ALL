


class AA{
      
    AA(){
        System.out.println("A's default --constructor");
    }

    class BB{
        BB(){
            System.out.println("class A.B's default constructor");
        }
    }
    static class CC{
        CC(){
            System.out.println("class A.C's default contructor");
        }
    }
}

public class classTest {
    public static void main(String[] args) {
        AA a=new AA();
        // A.B b=new a.B();
        AA.BB b= a.new BB();
        AA.CC c=new AA.CC();
        // AA.CC cc=a.new CC();
        
      

    }
}
