

import java.io.InputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
public class FileIOS {
       
       public static void main(String[] args) throws IOException {
             FileInputStream fis=new FileInputStream("abc.txt");
             int data=fis.read();
             System.out.println((char)data);
             data=fis.read();
             System.out.println((char)data);
             data=fis.read();
             System.out.println((char)data);
             data=fis.read();
             System.out.println((char)data);
             data=fis.read();
             System.out.println((char)data);
               data=fis.read();
             System.out.println((char)data);
             fis.close();
            //  fis.close();
            //  data=fis.read();

            FileOutputStream fos=new FileOutputStream("abc.txt");
            fos.write('z');
            fos.write(68);
            fos.write('d');
            fos.write('i');
            fos.write('p');
            fos.write('o');
            fos.write('k');
            byte[] b=new byte[16];
            b=new byte[]{12,3,4};
            // b= {1,2,3};
            byte[] c={1,9,8};
            b=new byte[]{'n','a','t','h'};

            fos.write(b);
            





       }
}
