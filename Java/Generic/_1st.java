

class A<T>{
       
      T t;

      void set(T t){
        this.t=t;
      }

      T get(){
        return t;
      }
}


public class _1st {
    public static void main(String[] args) {
          
        A<String> as;
        as= new A<>();
        as.set("dipok");
        System.out.println(as.get());
        
        A<String> as2;
        as2=new A<>();
        as2.set("dipu");
        System.out.println(as2.get());
        as=as2;

        A<Integer> ai=new A<>();
        // as=ai;//error
    }
}
