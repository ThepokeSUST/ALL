import java.util.Iterator;
import java.util.List;
import java.util.Vector;

public class vector {
        public static void main(String[] args) {
              
              List<Integer> v= new Vector<>();
              v.add(4);
              v.add(5);
              System.out.println(v);
              System.out.println();
            //   System.out.println(v[0]);

            Iterator<Integer> iterator = v.iterator();

              if(iterator.hasNext()){
                iterator.next();
                System.out.println("modification");
                iterator.remove();
              }
              System.out.println(v);
             
              iterator=v.iterator();
              v.add(7);
            //   while (iterator.hasNext()) {

            //     System.out.println(iterator.next());
                
            //   }//exception concurrentModification


            for (Integer ele : v) {
                  System.out.println(ele);
                //   v.add(3);//exception concurrentModification
            }
            System.out.println(v);
            
        
            
        }
}
