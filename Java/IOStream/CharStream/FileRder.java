import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class FileRder {
     public static void main(String[] args) throws FileNotFoundException,IOException{
          
        FileReader fr=new FileReader("abc.txt");

        System.out.println((char)fr.read());
         System.out.println((char)fr.read());
          System.out.println((char)fr.read());
           System.out.println((char)fr.read());
            System.out.println((char)fr.read());

     }
}
