


class A<T extends Number>{
     T t;
     void set(T t){
        this.t=t;
     }
     T get(){
        return this.t;
     }
}
public class _1st {
      public static void main(String[] args) {
             A<Integer> ai=new A<>();
             ai.set(9);
             System.out.println(ai.get());

             A<Float> af= new A<>();
             af.set(5.6f);
             System.out.println(af.get());

            //  A<String> as=new A<>();


      }
}
