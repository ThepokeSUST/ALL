
import java.io.FileInputStream;
import java.io.IOException;

public class FileIS {


        public static void main(String[] args) {
              
            //    FileInputStream fi= new FileInputStream("fileInput.txt");
            //    System.out.println(fi);
            
            // try(FileInputStream fi= new FileInputStream("fileInput.txt")){

            //     // System.out.println(fi);
            //     System.out.println(fi.getFD());
            //     System.out.println(fi.available());
            //     fi.skip(2);
            //     int data;
            //     while ((data=fi.read())!=-1) {
            //           System.out.print((char)data);
            //     }



            //     System.out.println();
            //     System.out.println(fi.getChannel());

            //     System.out.println(fi.available());
                   
            // }
            // catch(IOException io){
            //       System.out.println(io.getMessage());
            // }





            // try(FileInputStream fi=new FileInputStream("fileis.jpg")){
            //       System.out.println(fi.available());

            //       int data;
            //       System.out.println();
            //       while ((data=fi.read())!=-1) {
            //            System.out.print((char)data+" ");
            //       }

            //       System.out.println();
            //       System.out.println("END");
            // }
            // catch(Exception e){
            //      System.out.println(e.getMessage());
            // }


            try(FileInputStream fis=new FileInputStream("test.js")){

                  System.out.println(fis.available());
                  fis.skip(40);
                  System.out.println(fis.available());
                  while(fis.available()!=0){
                        System.out.print((char)fis.read());
                  }


            }
            catch(Exception e){
                System.out.println(e.getMessage());
            }
        }
}
