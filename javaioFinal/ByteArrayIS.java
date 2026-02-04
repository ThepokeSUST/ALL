import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.util.Arrays;

public class ByteArrayIS{
      
    public static void main(String[] args) throws IOException {
          System.out.println("start");
        System.out.println();
          byte b[]="DIpok Deb      nath Dipu\n".getBytes();
        //   System.out.println(Arrays.toString(b));
      
          
          ByteArrayInputStream byarrstr = new ByteArrayInputStream(b);


        


          System.out.println(byarrstr);

           System.out.println();

           int data;
           System.out.println(byarrstr.available());
           while((data=byarrstr.read())!=-1){
                System.out.print((char)data);
           }





             byte[] dta = "Hello World".getBytes(); // Convert string to byte array
        ByteArrayInputStream bis = new ByteArrayInputStream(dta);
        int ch;
        while ((ch = bis.read()) != -1) {
            System.out.print((char) ch);
        }
        bis.close();
      




          System.out.println();

          System.out.println("end");


    }
}