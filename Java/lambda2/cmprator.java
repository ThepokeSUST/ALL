


import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;


class A implements Comparator<String>{

    @Override
    public int compare(String o1, String o2) {
           
        //  return o1.charAt(0)<o2.charAt(0)? 1:-1;
        return o2.charAt(0)-o1.charAt(0);
    }

    void m(){
        System.out.println("m()");
    }
    
}
public class cmprator {
       public static void main(String[] args) {
            String[] arr=new String[5];
            arr[0]="dipok";
            arr[1]="asoka";
            arr[2]="Dipok";
            arr[3]="lasj";
            arr[4]="qwe";
            System.out.println(Arrays.toString(arr));
            Arrays.sort(arr);
            System.out.println(Arrays.toString(arr));
            // Arrays.sort(arr,new cmprator());
            Arrays.sort(arr, new A());
            System.out.println(Arrays.toString(arr));

            Arrays.sort(arr, (a,b)-> a.charAt(0)-b.charAt(0));
            System.out.println(Arrays.toString(arr));





            List<Integer> ls=new ArrayList<>();
            ls.add(5);
            ls.add(3);
             ls.add(53);
            ls.add(30);
            System.out.println(ls);

            Collections.sort(ls);
            System.out.println();
            System.out.println(ls);
            Collections.sort(ls, (a,b)->b-a);
            System.out.println(ls);
             Collections.sort(ls);
             System.out.println();
             System.out.println(ls);

              class newA implements Comparator<Integer>{

                @Override
                public int compare(Integer o1, Integer o2) {
                     return o2-o1;
                }


                void m(){
                    System.out.println("m()");
                }


             }

             Collections.sort(ls,new newA());
             System.out.println(ls);


       }
}
