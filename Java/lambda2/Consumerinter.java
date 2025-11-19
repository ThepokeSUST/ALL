import java.util.function.Consumer;



class A implements Consumer<String>{

    @Override
    public void accept(String s){
            System.out.println(s);
    }


}
public class Consumerinter {

    public static void main(String[] args) {
        A a=new A();
        a.accept("dipok");

        Consumer<Integer> con=x->{
            System.out.println(x+100);
        };

        con.accept(55);
    }
    
}
