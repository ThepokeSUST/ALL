import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.Reader;
import java.util.Arrays;

public class FileR {
      public static void main(String[] args) throws IOException{
                  Reader fr=new FileReader("abc.txt");
                //   System.out.println(fr.read());
                fr.skip(3);
                  System.out.println((char)fr.read());
                  System.out.println();
                  System.out.println((char)fr.read());
                  char[] ch=new char[10];
                  fr.read(ch);
                  System.out.println(Arrays.toString(ch));
                  



      }
}
