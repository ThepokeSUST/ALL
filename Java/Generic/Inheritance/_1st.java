

import java.util.function.Consumer;
class A<T>  implements Consumer<T> {
      
        @Override 
        public void accept(T t){
           System.out.println(t.toString());
        }
        Integer  m(T t){
            if(t instanceof Integer)
               return (Integer)t+7;
            else return -1;   

        }
        String m(String s){
          return " ok ";
        }
}

public class _1st {
      public static void main(String[] args) {
          
           System.out.println("Start");
           A<Integer> a=new A<>();
           a.accept(56);
            A<String> s=new A<String>();
           s.accept("Dipok");
           System.out.println(a.m("dipok"));
           System.out.println(a.m(7));
      //      System.out.println(s.m("Dipok"));
           System.out.println("End");
           


      }
}
