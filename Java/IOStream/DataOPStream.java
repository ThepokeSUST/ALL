// import java.io.DataInputStream;
// import java.io.DataOutputStream;
// import java.io.FileInputStream;
// import java.io.FileNotFoundException;
// import java.io.FileOutputStream;
// import java.io.IOException;
// import java.io.DataOutputStream;

// public class DataOPStream {
//     public static void main(String[] args) throws IOException {
          
//            DataOutputStream dO;
//         try( dO=new DataOutputStream(new FileOutputStream("data.txt"))){
           
//         }
//         catch(IOException ie){
//               System.out.println("Exception occur");
//               System.out.println(ie);
//         }
//         finally{
//             dO.close();
//         }
        

//     }
// }



import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.DataOutputStream;

public class DataOPStream {
    public static void main(String[] args) throws IOException {
          
          
        try(DataOutputStream  dO=new DataOutputStream(new FileOutputStream("data.dat"))){
            dO.writeInt(4);
            dO.writeChar('D');
            //dO.flush();
            dO.writeBoolean(false);
            dO.writeFloat(9.9f);
            dO.flush();

        }
        catch(IOException ie){
              System.out.println("Exception occur");
              System.out.println(ie);
        }
        finally{
            // dO.close();
        }
       try{

       }
       catch(Exception e){

       }

       try(DataInputStream di=new DataInputStream(new FileInputStream("data.txt"))){
            System.out.println((char)di.readChar());
            System.out.println(di.readInt());
            System.out.println(di.read());
            System.out.println(di.readBoolean());
       }
       catch(IOException io){
        System.out.println(io);
       }


        
        // // Try block to check for exceptions
        // try ( DataOutputStream dout =
        //                 new DataOutputStream(new FileOutputStream("file.txt")) ) {

        //     dout.writeDouble(1.1);
        //     dout.writeInt(55);
        //     dout.writeBoolean(true);
        //     dout.writeChar('4');
        // }

        // // Catch block to handle the exceptions
        // catch (FileNotFoundException ex) {

        //     // Display message when FileNotFoundException occurs
        //     System.out.println("Cannot Open the Output File");
        //     return;
        // }
        

    }
}
