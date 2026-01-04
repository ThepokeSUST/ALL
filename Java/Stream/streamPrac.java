import java.util.Arrays;
import java.util.Collections;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.List;
public class streamPrac {
         
      public static void main(String[] args) {
           String[] str={"d","i","p"};
           Stream<String> strs=Arrays.stream(str);
        //    System.out.println(strs);

        Stream<Integer> limit = Stream.iterate(10, x-> x+1).limit(90);
        List<Integer> ls=limit.collect(Collectors.toList());
        System.out.println(ls);
        System.out.println();

        List<String> lst= Arrays.asList("Dipok","Fipok","Dipu","Fipu","Mamun","Mahin");
            Stream<String> filter = lst.stream().filter(x-> x.startsWith("D"));//intremediate operations
            //no filtering done yet
            List<String> collect = filter.collect(Collectors.toList());//terminal operation
            // filtering done
            System.out.println(collect);

            List<String> lcollect=lst.stream().map(x-> x.toLowerCase()).collect(Collectors.toList());
            System.out.println(lcollect);
        
            List<Integer> collect2 = lst.stream().map(x-> 2).collect(Collectors.toList());

            System.out.println(collect2);

            List<String> collect3=lst.stream().map(x->x.toUpperCase()).collect(Collectors.toList());
            System.out.println(collect3); 
             
            List<String> collection4=lst.stream().filter(x->x.length()%2==0).collect(Collectors.toList());
    






      }
}
