import java.util.ArrayList;

class A{

}

public class _3rd {
    public static void main(String[] args) {
        ArrayList<?> al=new ArrayList<>();    
        System.out.println(al.getClass());
        // al.add(5);//error
        System.out.println(al.size());
        al.add(null);
        System.out.println(al);
        System.out.println(al.size());

        ArrayList<? extends Number> an;
        // an.size();
        an=new ArrayList<Integer>();
        // an.add(34);
        ArrayList<Double> ad= new ArrayList<>();
        an=ad;an.add(null);

    }    
}
