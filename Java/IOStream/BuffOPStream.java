import java.io.BufferedOutputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Arrays;

public class BuffOPStream {
    public static void main(String[] args) throws IOException {

        FileOutputStream fo = new FileOutputStream("abc.txt", true);
        BufferedOutputStream bf = new BufferedOutputStream(fo);

        bf.write(67);
        bf.flush();
        bf.write(new byte[] { 97 });
        bf.flush();


        String str="ABCD \n";
        byte bb[]=str.getBytes();
        System.out.println(Arrays.toString(bb));

    }
}
