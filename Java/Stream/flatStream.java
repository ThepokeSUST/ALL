import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.IntSummaryStatistics;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

public class flatStream {
         public static void main(String[] args) {
               
        //        List<Integer> lst= Arrays.asList(1,2,4,5,5,6,7);
        //        System.out.println(lst);
        // lst.stream().map((x)->{
        //         System.out.println("map funtion");
        //         return x^2;
        //        }).count();
        //        System.out.println("After map funtion");
        //     //    long count=lststream.count();
        //     //    System.out.println(count);

        //     long count=lst.stream().filter(x->{
        //         System.out.println("Filtering");
        //         return x%2!=0;
        //     }).count();
        //     System.out.println(count);


        //     Stream<String> strstream= Stream.of("dipok","dipu","tomal", "rahul","chandan");
        //     System.out.println(strstream.collect(Collectors.toList()));

        //     // strstream.map(x->x+"ok");
        //     // System.out.println(strstream.map(x->x+"ok").toList());

        //     Stream<Integer> intstream= Stream.of(43,2,76,90);

        //     // System.out.println(intstream.count());
        //     System.out.println(intstream.map(x->x*x*x).toList());


        //     System.out.println();
        //     List<Integer> lst1=Arrays.asList(12,23,34,45);
        //     // lst1.add(89);
        //     lst1.set(1, 0);
        //     System.out.println(lst1);
        //     System.out.println(lst1.stream().filter(x->x%2==0).collect(Collectors.toCollection(()-> new ArrayList<>())));

        //     System.out.println();
        //     List<String> name= Arrays.asList("dipok","deb","nath");
        //     System.out.println(name.stream().map(x-> x.toUpperCase()).toList());

        //     Stream<String> namestream=name.stream();
            
        //     String collectstring = namestream.map(String::toUpperCase).collect(Collectors.joining(" "));
        //     System.out.println(collectstring);


        //     lst1=Arrays.asList(34,342,23,1,0);

        //     System.out.println(lst1);
        //     Stream<Integer> stream = lst1.stream();
        //     // stream.collect(Collectors.joining());//joining accepts Stream<String> type stream.
        //     String collect = stream.map(x-> String.valueOf(x)).collect(Collectors.joining(","));
        //     System.out.println(collect);



        //     String myName= "dipok deb nath dipu";
        //     IntStream chars = myName.chars();
        //     System.out.println(chars);
        //     System.out.println();
        //     chars.map(x->{
        //         if(x>'a')
        //             return x-32;
        //         return x;
        //     }).peek(x->{
        //         System.out.println("OKK");
        //     }).forEach(x->System.out.println());
        //      System.out.println();
        //     IntStream chars1=myName.chars();
        //     System.out.println(chars);
            


        //     List<Integer> ls1=Arrays.asList(33,2,23,44);
        //     System.out.println(ls1);
        //     long l=ls1.stream().map(x-> x*x).peek((x)-> System.out.println("okkk")).count();
        //     System.out.println(l);

        //     Integer[] arr={76,438,329,22};
        //     Stream<Integer> arrStream= Arrays.stream(arr);
        // //    arr=(Integer[]) arrStream.toArray();
        //      arr=arrStream.toArray(Integer[]::new);
        //      System.out.println(arr);
        //      System.out.println(Arrays.toString(arr));
        //      System.out.println();
        //      System.out.println(ls1.stream().collect(Collectors.toList()));
        //      System.out.println(ls1.stream().map(x->x/2).toList());
        //     //  System.out.println(ls1.stream().map(x->x/2).toList());

        //      System.out.println(ls1.stream().map(x->x/2).max(Comparator.naturalOrder()).get());
        //      System.out.println(ls1.stream().map(x->x/2).min(Comparator.naturalOrder()).get());

      //   List<List<Integer>> ls=Arrays.asList(
      //          Arrays.asList(12,23,3,4354,45),
      //          Arrays.asList(9,8,7,6,5),
      //          Arrays.asList(23,12,1,2,3)
      //       );

      //       System.out.println(ls);
            
      //       List<List<Integer>> collect = ls.stream().peek(x->x.sort(Comparator.naturalOrder())).collect(Collectors.toList());

      //       System.out.println(collect);

      //       List<Integer> collect2 = ls.stream().flatMap(x->x.stream()).map(x->x+1).map(x->x+0).collect(Collectors.toList());
      //       System.out.println(collect2);
            

      //       String str= Arrays.asList("D","I","P","O","K").stream().map(x->x.toLowerCase()).collect(Collectors.joining());
      //       System.out.println(str);
             
      //       System.out.println( Arrays.asList("D","I","P","O","K").stream().max(Comparator.naturalOrder()));
      //       System.out.println( Arrays.asList("D","I","P","O","K").stream().min(Comparator.naturalOrder()));
            


      //       System.out.println();
      //       List<Integer> lst2=Arrays.asList(23,1,12,34);
            
      //       IntSummaryStatistics stats = lst2.stream().collect(Collectors.summarizingInt(x->x));

      //       System.out.println(stats);
      //       System.out.println();
      //       System.out.println("Count "+ stats.getCount());
      //       System.out.println("sum "+stats.getSum());
      //       System.out.println("min "+ stats.getMin());
      //       System.out.println("Average "+stats.getAverage());


      //      System.out.println( Arrays.asList("3","5","6","7","8").stream().collect(Collectors.summingInt(x->Integer.valueOf(x))));

      //      System.out.println( Arrays.asList("d","i","p","o","k").stream().collect(Collectors.counting()));
                
      List<String> words=Arrays.asList("dipk","dipu","fipok","fipu");
      System.out.println(words.stream().collect(Collectors.groupingBy(x->x.length())));


      Map<Boolean, List<String>> collect = words.stream().collect(Collectors.groupingBy(x->x.startsWith("d")));

      Map<Integer, List<String>> collect2 = words.stream().collect(Collectors.groupingBy(String::length));

      System.out.println(collect2);

      Map<Integer, Long> collect3 = words.stream().collect(Collectors.groupingBy(String::length,Collectors.counting()));
         System.out.println(collect3);
         System.out.println();

         TreeMap<Integer, List<String>> collect4 = words.stream().collect(Collectors.groupingBy(String::length, TreeMap::new,Collectors.toList()));


         System.out.println(collect4);

         words=Arrays.asList("dipok","dipu","fipok","fipu","dipok");
         // System.out.println(words.stream().collect(Collectors.toMap(x->x, x->x.length())));
         System.out.println(words.stream().collect(Collectors.groupingBy(x->x,Collectors.counting())));

         int[] arr={4,7,9,8};
          IntStream stream = Arrays.stream(arr);
          stream.collect(Collectors.summingInt((x)->x));


         }    
}
