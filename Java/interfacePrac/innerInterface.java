import java.util.Arrays;


import java.lang.CharSequence;



interface outer{
      int a=9;
      void m();
      default void nn(){
        System.out.println("default method nn from outer");
      }
      interface innerouter {
      
         int a=90;
         void n();
         void m();
         default void nn(int a){
            System.out.println("default method nn from inner");
         }
         
      }
}


class inclass implements outer{
        inclass(){
            System.out.println("default constructor od inclass");
        }
    public void m(){
        
       System.out.println("this is method m() from class inclass");       
    }
    class innerinclass implements outer,innerouter{
        public void m(){
            System.out.println("in innerinclass m() method");
        }
        public void n(){
            // System.out.println("variable a="+a);// a is ambiguous here

        }
    }

    public interface innerclassinterface{
           int a=9999999;
           void m();
    }
}

class testinnerinterface implements inclass.innerclassinterface{
     static private int a;
     
     testinnerinterface(){
        System.out.println("testinnerinterface constructor");
     }
    @Override
    public void m() {
        System.out.println("testinnerinterface method m()");
    }

}
public class innerInterface{
     public static void main(String[] args) {
          
        inclass inc= new inclass();
        inc.m();
        
        inclass.innerinclass innerc=inc.new innerinclass();
        innerc.m();
        innerc.nn();
        inclass.innerclassinterface in;
        // System.out.println(in.a);//error
        System.out.println("''''''''''''''''''''''''''''''''''");
        System.out.println(inclass.innerclassinterface.a);
        System.out.println("''''''''''''''''''''''''''''''''''");
        testinnerinterface t=new testinnerinterface();
        t.m();

     }    
}