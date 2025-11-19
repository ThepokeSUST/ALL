
import java.util.ArrayDeque;
import java.util.ArrayList;


class C{

}
class D extends C{

}

class A{
      
      void print(ArrayList<?> al){
            al.forEach(System.out::println);
      }
      double sum(ArrayList<? extends Number> al){
           double s=0;
        //    al.forEach(x->{
        //        s+=x.doubleValue();
        //    });
        for(Number N: al){
            s+=N.doubleValue();
        }
           return s;
      }

      void m(ArrayList<? super D> al){

      }
      void n(ArrayList<? super Number> al){

      }
}


public class _2nd {
   public static void main(String[] args) {
                
           A a=new A();

           ArrayList<String> al=new ArrayList<>();
           al.add("Dipok");
           al.add("dipu");
           a.print(al);

           ArrayList<Integer> al2=new ArrayList<>();
           al2.add(3);
           al2.add(6);
           a.print(al2);

           System.out.println(a.sum(al2));
        //    System.out.println(a.sum(al));
         ArrayList<D> ald=new ArrayList<>();
         ArrayList<C> alc=new ArrayList<>();

          a.m(null);
          a.m(ald);
          a.m(alc);
        ArrayList<Number> an=new ArrayList<>();
        //   a.n(al2);
        a.n(an);
        ArrayList<Object> ao=new ArrayList<>();
        a.n(ao);




        
        
    
   }    
}
