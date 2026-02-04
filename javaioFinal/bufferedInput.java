
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
public class bufferedInput {
      
    public static void main(String[] args) throws FileNotFoundException,IOException {
            

        BufferedInputStream bf=new BufferedInputStream(new FileInputStream("bufferedInput.txt"));
        System.out.println(bf);
        int data;
        // while( data=bf.read()!=-1){
        //     System.out.println(bf.read());
        // }
          while ((data = bf.read()) != -1) {   // -1 means end of file
            System.out.println((char) data);   // convert ASCII to character
        }

        bf.close();
          
    }
}
