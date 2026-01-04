import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.Writer;
import java.io.IOException;
public class BufferedW {
    public static void main(String[] args) throws IOException{
             
        Writer br= new BufferedWriter(new FileWriter("abcbufferd.txt"));

        br.append("dipok").append(" deb").append(" Nath");
        br.flush();
        br.close();
    }
}
