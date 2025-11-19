import java.util.ArrayList;
import java.util.List;
public class _1st {

      static void Print(String s){
              System.out.print(s+" ");
      }

         void m(String s){
             System.out.print(s+" ");
         }
       public static void main(String[] args) {
             List<String> ls= new ArrayList<>();
             ls.add("DIPOK");
             ls.add("RIFAT");
             ls.add("sjjd");
             ls.forEach(x-> System.out.print(x));
             System.out.println();
             ls.forEach(_1st::Print);
             System.out.println();
             ls.forEach(System.out::print);
             System.out.println();
             _1st cls1=new _1st();
             ls.forEach(cls1::m);
             

       }
}
