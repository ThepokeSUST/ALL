package default2;
import default1.checkdefault1;



class A extends checkdefault1{

    void method1(){
        System.out.println(this.pba);
    }
}
public class checkdefault2 {
        
      public static void main(String[] args) {
            
           checkdefault1 chd1=new checkdefault1();
           System.out.println(chd1.pba);
            
           System.out.println();
           A a=new A();
           System.out.println(a.pba);
           a.method1();

      }

}
