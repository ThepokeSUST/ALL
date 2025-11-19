import java.util.function.Supplier;



class A implements Supplier<String>{
       
    @Override
    public String get(){
        return "DIPOK";
    }
}
public class Supplierinter {
    public static void main(String[] args) {
           A a=new A();
           System.out.println(a.get());

           Supplier<Integer> sup= ()-> 4*6;

           System.out.println(sup.get());
    }
}
