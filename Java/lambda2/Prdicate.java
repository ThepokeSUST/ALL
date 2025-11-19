

import java.util.ArrayList;
import java.util.function.Predicate;
import java.util.List;
//to check something

class A implements Predicate<Integer>{
           
  

      @Override
      public boolean test(Integer t) {
           return t%2==0;
      }

      void m(){

      }
}
public class Prdicate {
       public static void main(String[] args) {
             
           Integer i=8;
           System.out.println(new A().test(i));


           Predicate<String> startwitha=x-> x.charAt(0)=='a'||x.charAt(0)=='A';
           
           System.out.println(startwitha.test("dipok"));



           List<String> ls=new ArrayList<>();

           ls.add("dipok");
           ls.add("adrita");
              ls.add("xipok");
           ls.add("amitab");
              ls.add("tomal");
           ls.add("arijit");

           ls.forEach(System.out::print);
           System.out.println();
           for(String s : ls){
               System.out.print(startwitha.test(s)+" ");
           }
           System.out.println();
           Predicate<String> endwithD=x-> x.toLowerCase().charAt(x.length()-1)=='d';

           System.out.println(endwithD.test("dipu"));
           System.out.println(endwithD.test("dipokd"));



           System.out.println(startwitha.and(endwithD).test("Dipokd"));
           System.out.println();
           Predicate<String> stwithaEnwithD=startwitha.and(endwithD);
           System.out.println(stwithaEnwithD.test("dipokd"));
           System.out.println(stwithaEnwithD.test("asodjs"));
           System.out.println(stwithaEnwithD.test("asdrad"));
        System.out.println();
           Predicate<String> stwAorEnwD=startwitha.or(endwithD);
           System.out.println(stwAorEnwD.test("dipoksd"));
           System.out.println(stwAorEnwD.test("asdsk"));
           System.out.println(stwAorEnwD.test("asdsdfsd"));
           System.out.println(stwAorEnwD.test("null"));


           System.out.println();
           Predicate<String> stwAnagate= startwitha.negate();
           System.out.println(stwAnagate.test("asdh"));
           System.out.println(stwAnagate.test("disja"));

           System.out.println();
           Predicate<String> IsEqual=Predicate.isEqual("DIPOK");
           System.out.println(IsEqual.test("dipok"));
           System.out.println(IsEqual.test("DIPOK"));

           
           

           


       }
}
