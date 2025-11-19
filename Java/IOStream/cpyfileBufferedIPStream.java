import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class cpyfileBufferedIPStream {
    public static void main(String[] args) throws IOException {
           
             BufferedInputStream bi=new BufferedInputStream(new FileInputStream("source.txt"));
             BufferedOutputStream bo=new BufferedOutputStream(new FileOutputStream("desti2.txt"));

            int data;
             while((data=bi.read())!=-1){
                  bo.write(data);
             }
             System.out.println("Done");
             bo.flush();

    }
}
