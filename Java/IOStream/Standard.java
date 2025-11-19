import java.io.IOException;

public class Standard {
    public static void main(String[] args) throws IOException {
            int data= System.in.read();
            System.out.println(data);
            byte b[]={};
            data=System.in.read(b);
            System.out.println(data);
    }
}
