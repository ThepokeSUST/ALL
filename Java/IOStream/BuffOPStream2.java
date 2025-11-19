import java.io.BufferedOutputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class BuffOPStream2 {
    public static void main(String[] args) throws IOException {
            FileOutputStream fs=new FileOutputStream("abc.txt",true);
            BufferedOutputStream bf=new BufferedOutputStream(fs);
            bf.write(new byte[]{'D',' ','I',' ','P',32,'U'});
            bf.close();
    }
}
