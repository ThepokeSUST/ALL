import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class cpyfileFileIPStream {
    public static void main(String[] args) throws IOException {
          

           FileInputStream fi=new FileInputStream("source.txt");
           FileOutputStream fo=new FileOutputStream("desti.txt");
           int data;
           while((data=fi.read())!=-1){
              fo.write(data);
            
           }
           System.out.println("Done");
    }
}
