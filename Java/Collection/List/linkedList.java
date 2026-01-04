import java.util.LinkedList;
import java.util.List;
public class linkedList {
      public static void main(String[] args) {
           List<Integer> lk=new LinkedList<>();

           lk.add(4);
           lk.add(90);
           lk.add(5);
           lk.add(30);
           System.out.println(lk);
           System.out.println(lk.getFirst());
           System.out.println(lk.getLast());
           LinkedList<Integer> lkls=(LinkedList<Integer>)lk;
           System.out.println(lkls);
       
           System.out.println(    lkls.poll() );
           System.out.println(lkls);
           System.out.println(lk);

           lkls.add(1, null);
           System.out.println(lkls);

            System.out.println();
           for (Integer ele : lkls) {
                 System.out.println(ele);
                //  lkls.add(8);//concurrentModification exception
           }

           


      }
}
