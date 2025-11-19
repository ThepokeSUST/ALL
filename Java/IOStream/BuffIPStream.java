import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class BuffIPStream {
    public static void main(String[] args) throws FileNotFoundException,IOException {
           FileInputStream fs=new FileInputStream("abc.txt");
           BufferedInputStream bfin=new BufferedInputStream(fs);       
           
           System.out.println(bfin.available());
           System.out.println(bfin.markSupported());
           System.out.println((char)bfin.read());
           if(bfin.markSupported())
                 bfin.mark(5);
           
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());
                 bfin.reset();
                 System.out.println((char)bfin.read());
                 System.out.println((char)bfin.read());

    }
}
