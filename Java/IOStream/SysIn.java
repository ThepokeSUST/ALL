import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;

public class SysIn {
       public static void main(String[] args) throws IOException {
        System.out.println("start");
        byte[] b=new byte[]{9,8};
        int data= System.in.read(b);
        System.out.println(data);
        System.out.println("end");

        System.out.println(Arrays.toString(b));

       }    
}
