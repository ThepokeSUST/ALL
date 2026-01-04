import java.util.function.BiFunction;
import java.util.function.BiPredicate;
import java.util.function.Function;
import java.util.function.Predicate;



public class functionalInterfcae {

    public static void main(String[] args) {
          
           
           Predicate<Integer> p=x-> x%2==0;
           System.out.println(p.test(8));
           System.out.println(p.negate().test(9));
           Predicate<Integer> pp = p.or((x)-> x%2!=0);
           
           System.out.println(pp.test(8));

           System.out.println(pp.test(9));
           Predicate<Integer> ppp = p.and((x)-> x%2!=0);

           System.out.println(ppp.test(5));
           System.out.println(ppp.test(8));

           BiPredicate<Integer,Integer> bp=(x,y)-> x+y==10;
           System.out.println(bp.test(4, 6));


           Function<String,Integer> f=(x)->{
              switch (x) {
                case "one":
                    return 1;
                   
                case "two":
                    return 2;
                case "three":
                    return 3;    
                default:
                    return 0;
                
              }
           };

           System.out.println(f.apply("one"));

           BiFunction<String,Integer,Integer> bf=(x,y)->{
               if("one".equals(x))
                  return y+1;
               else 
                  return 0;
           };
           System.out.println(bf.apply("one", 9));


    }
    
}
