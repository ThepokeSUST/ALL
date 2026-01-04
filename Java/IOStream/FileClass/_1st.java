import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
public class _1st {
       public static void main(String[] args) throws IOException {
            File f=new File("abc.txt");

            boolean iscreated=f.createNewFile();
            if(iscreated)
                System.out.println("abc.txt file created");
            else
                System.out.println("file not created");

            FileWriter fw=new FileWriter(f.getName());
            fw.write("Hellowww");
            fw.close();
       }
}
