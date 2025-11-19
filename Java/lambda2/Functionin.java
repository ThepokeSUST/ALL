
import java.util.function.Function;

class A implements Function<Integer, String> {

    @Override
    public String apply(Integer t) {
        if (t >= 33)
            return "pass";
        return "Fail";
    }

    void m() {
        System.out.println("m()");
    }

}

public class Functionin {
    public static void main(String[] args) {

        A a = new A();
        System.out.println(a.apply(45));

        Function<Integer, Integer> sqr = x -> x * x;
        Function<Integer, Integer> multby2 = x -> 2 * x;

        Function<Integer, Integer> sqrANDmulby2 = sqr.andThen(multby2);
        Function<Integer,Integer> mulby2ANDsqr=multby2.andThen(sqr);
         System.out.println(sqrANDmulby2.apply(3));
         System.out.println(mulby2ANDsqr.apply(3));
         System.out.println(sqr.compose(multby2).apply(3));

         Function<Integer,Integer> iden= Function.identity();

         System.out.println(iden.apply(56));



         
    }

}
