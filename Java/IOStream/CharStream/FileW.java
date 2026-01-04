import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;

public class FileW {
      public static void main(String[] args) throws IOException, InterruptedException {
                Writer fw=new FileWriter("abc2.txt");
                fw.write('A');
                
                fw.flush();
                char[] ch=new char[]{'a','b','c','e'};
                fw.write(ch);
                fw.flush();

                fw.write(" dipokdeb nath\n");
                fw.flush();
                fw.write("DIPOK",1,4);
                fw.flush();

                fw.close();
                Thread.sleep(1000);
                fw=new FileWriter("abc.txt");
                fw.append("saaalee");
            //     fw.flush();

            fw.append((char)32).append('A').append('B');
            fw.close();
    
      }
}
