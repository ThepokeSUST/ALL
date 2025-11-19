import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.List;


class A implements Comparator{

      @Override
      public int compare(Object o1, Object o2) {
        Integer i=(Integer)o1;
        Integer j=(Integer)o2;
        return j-i;
      }
      

}

public class Comparatortest{
       public static void main(String[] args) {
             List<Integer> ls= new ArrayList();    
             
             ls.add(78);
             ls.add(90);
             ls.add(0);
             ls.add(4);
             System.out.println(ls);
             ls.sort(null);
             System.out.println(ls);
             ls.sort((a,b)-> b-a);
             System.out.println(ls);


             List<Integer> ls2=new ArrayList<Integer>();
             ls2.add(78);
             ls2.add(90);
             ls2.add(0);
             ls2.add(4);
            System.out.println();
             System.out.println(ls2);


       } 
}
