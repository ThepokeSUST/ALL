import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class streamPractice {
      public static void main(String[] args) {
              int arr[]={90,80,0,1,2,3,4};
              System.out.println(arr);        
              System.out.println(Arrays.toString(arr));
              IntStream lstStream= Arrays.stream(arr);
              System.out.println(lstStream);
              System.out.println();
      }    
}
