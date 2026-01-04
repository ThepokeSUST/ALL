import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.stream.Collectors;
import java.util.stream.Stream;
public class arrayList {

    public static void main(String[] args) throws InterruptedException {
           
    //       List<Integer> ls=new ArrayList<>();

    //       ls.add(6);
    //       ls.add(89);
    //       ls.add(23);
    //       ls.add(null);
        
    //       System.out.println(ls.size());

    //       ls.forEach(x-> System.out.println(x));
    //       Iterator<Integer> itr= ls.iterator();

    //       while(itr.hasNext()){
    //         Integer next = itr.next();
    //         System.out.println(next);
    //       }
    //       System.out.println(itr.hasNext());

    //         System.out.println();
    //    ListIterator<Integer> lsitr=   ls.listIterator();

    //    while (lsitr.hasNext()) {
    //     Integer next= lsitr.next();
    //    }
    //    System.out.println(lsitr.hasNext());
    //    System.out.println(lsitr.previous());
    //    System.out.println(lsitr.previous());
    //    System.out.println(lsitr.hasPrevious());
       
    //    ls.remove(null);
    //    ls.replaceAll(x->x*2);
    //    System.out.println(ls);
    //    System.out.println(ls.getFirst()+" "+ls.getLast());

    //    System.out.println();

    //    for(int i=0;i<ls.size();i++){
    //     System.out.println(ls.get(i));
    //     Thread.sleep(500);
    //     ls.add(7);
    //    }//infinite loop

       
       List<Integer> arrayList1=new ArrayList<>();
       List<Integer> cpyonwrite=new CopyOnWriteArrayList<>();
       arrayList1.add(33);
       arrayList1.add(55);
       arrayList1.add(333);
       arrayList1.add(555);

       cpyonwrite.add(33);
       cpyonwrite.add(55);
        cpyonwrite.add(333);
       cpyonwrite.add(555);

       System.out.println(arrayList1);

       Iterator<Integer> iterator = arrayList1.iterator();

       iterator.next();
       iterator.remove();
       System.out.println(arrayList1);
        
       System.out.println("copyonwriteArrayList");
       Iterator<Integer> iterator2 = cpyonwrite.iterator();
       iterator2.next();
    //    iterator2.remove();//exception
       
       System.out.println(cpyonwrite);



       System.out.println();

       for (Integer integer : arrayList1) {
          System.out.println(integer);
        //   arrayList1.add(8);//concurrentModification exception 
       }

       System.out.println();
       for (Integer integer : cpyonwrite) {
              System.out.println(integer);
              cpyonwrite.add(84);//works fine 
       }
       System.out.println(cpyonwrite);

       System.out.println("'''''''''''''");
       Iterator<Integer> iterator3 = cpyonwrite.iterator();
       iterator3.next();
      //  iterator3.remove();//unsupportedOperation Exception
       System.out.println(cpyonwrite);
       
       Stream<Integer> stream = cpyonwrite.stream();
       System.out.println(stream.filter(x->x%2==0).collect(Collectors.toList()));
       System.out.println(cpyonwrite.stream().map(x->x*2).collect(Collectors.toList()));
       
     









    }
    
}
