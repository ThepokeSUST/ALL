import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.nio.CharBuffer;
import java.util.Arrays;

public class FileRder2 {
       public static void main(String[] args) throws IOException {
              FileReader fr=new FileReader("abcd.txt");
              PrintStream out=System.out;

              char[] buffer= new char[30];
              CharBuffer charbuffer= CharBuffer.wrap(buffer);
              System.out.println("charbuffer");
              System.out.println(Arrays.toString(charbuffer.array()));
              System.out.println();

              if(fr.markSupported()){
                fr.mark(100);
                out.println("fr marked successfully");
              }
              fr.skip(3);
              if(fr.ready()){
                System.out.println(Arrays.toString(buffer));
                fr.read(buffer,5,10);
                System.out.println(Arrays.toString(buffer));
                fr.read(buffer,16,2);
                System.out.println(Arrays.toString(buffer));
                // fr.reset();
                //   fr.read(buffer,5,10);
                // System.out.println(Arrays.toString(buffer));
                // fr.read(buffer,16,2);
                // System.out.println(Arrays.toString(buffer));
                System.out.println();
                System.out.println(Arrays.toString(charbuffer.array()));
                fr.read(charbuffer);
                System.out.println((char)fr.read());

              }
       }
}
