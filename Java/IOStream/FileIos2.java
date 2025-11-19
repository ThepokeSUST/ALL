import java.io.FileInputStream;
import java.io.IOException;

public class FileIos2 {
    public static void main(String[] args) throws IOException {
         FileInputStream fis=new FileInputStream("abc.txt");
         System.out.println(fis.available());
         if(fis.markSupported()){
            fis.mark(4);
         }
         System.out.println((char)fis.read());
         System.out.println(fis.available());
          System.out.println((char)fis.read());
           System.out.println((char)fis.read());
            // System.out.println((char)fis.read());
            if(fis.markSupported())
            fis.reset();
             System.out.println();
               System.out.println((char)fis.read());

             System.out.println((char)fis.read());
              System.out.println((char)fis.read());
            //   fis.reset();
              System.out.println();
               System.out.println((char)fis.read());



                 
    }
}
