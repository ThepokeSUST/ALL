import java.util.function.Function;

class A<T> implements Function<String,Integer> {

    T t;
    final T ft=null;
    // static T st;//cant  make any static field of not static 
    A(T t){
        this.t=t;
    }
    @Override
    public Integer apply(String t) {
        
        return t.length();
     
    }

     
}

class B extends A<String> {

    B(String t) {
        super(t);
      
    }


}

public class _2nd {
      public static void main(String[] args) {
          
        B b=new B("dipok");
        System.out.println(b.apply("dipu"));
      }
}
