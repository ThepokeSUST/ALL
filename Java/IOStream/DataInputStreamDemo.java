// Java program to Demonstrate DataInputStream Class

// Importing I/O classes
import java.io.*;

// Main class
public class DataInputStreamDemo {

    // Main driver method
    public static void main(String args[]) throws IOException {

        // Writing the data

        // Try block to check for exceptions
        try ( DataOutputStream dout =
                        new DataOutputStream(new FileOutputStream("file.dat")) ) {

            dout.writeDouble(1.1);
            dout.writeInt(55);
            dout.writeBoolean(true);
            dout.writeChar('4');
        }

        // Catch block to handle the exceptions
        catch (FileNotFoundException ex) {

            // Display message when FileNotFoundException occurs
            System.out.println("Cannot Open the Output File");
            return;
        }

        // Reading the data back.

        // Try block to check for exceptions
        try ( DataInputStream din =
                        new DataInputStream(new FileInputStream("file.dat")) ) {

            // Illustrating readDouble() method
            double a = din.readDouble();

            // Illustrating readInt() method
            int b = din.readInt();

            // Illustrating readBoolean() method
            boolean c = din.readBoolean();

            // Illustrating readChar() method
            char d = din.readChar();

            // Print the values
            System.out.println("Values: " + a + " " + b + " " + c + " " + d);
        }

        // Catch block to handle the exceptions
        catch (FileNotFoundException e) {

            // Display message when FileNotFoundException occurs
            System.out.println("Cannot Open the Input File");
            return;
        }


        DataInputStream din=new DataInputStream(new FileInputStream("file.dat"));

        
            // Illustrating readChar() method
            char d = din.readChar();
          // Illustrating readDouble() method
            double a = din.readDouble();

          
            // Illustrating readBoolean() method
            boolean c = din.readBoolean();

              // Illustrating readInt() method
            int b = din.readInt();



            // Print the values
            System.out.println("Values: " + a + " " + b + " " + c + " " + d);

    }
}