
import java.io.IOException;
import java.lang.System;


public class Basic {
     
    

    public static void main(String[] args) throws IOException{

        System.out.println((int)'\n');
         int i;
          i = System.in.read();
          System.out.println((char)i);
 
          System.in.read();
          System.in.read();
          int num = (System.in.read() - '0') * 10 + (System.in.read() - '0');
          System.out.println(num);
          System.in.close();

    }
}
