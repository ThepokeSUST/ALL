
import java.lang.Comparable;
import java.util.Arrays;

class A implements Comparable<A>{
     
    String name;
    A(String name){
        this.name=name;
    }
    @Override
    public int compareTo(A o) {

        if(this.name.equals(o.name)) return 0;
        else return this.name.compareTo(o.name);
    }
    @Override
    public String toString(){
          return this.name;
    }

}
public class Cmpareable {
       
      public static void main(String[] args) {
               A a=new A("dipok");
            

                A[] arr=new A[]{new A("Dipok"),new A("dipu"),new A("Fipok"),new A("Rohit negi"),new A("Striver"),new A("anisul haq"),new A("Sradda")};
                System.out.println(Arrays.toString(arr));
                Arrays.sort(arr);
                System.out.println(Arrays.toString(arr));


            
      }
}
