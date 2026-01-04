
class A{
    volatile boolean flag=false;

     void read(){
          while(!flag){
            // System.out.println("not reading");
          }
          flag=false;
          System.out.println("reading done");
     }

     void write(){
        while(flag){
            System.out.println("not writing");

        }
        System.out.println("write");
        flag=true;
        System.out.println("Writing done");
     }
}
public class VolatileKey {
      public static void main(String[] args) {
           
           A a=new A();
           Thread th1=new Thread(
            ()->{
                a.write();
            }
           );
           Thread th2=new Thread(
            ()->{
                a.read();
            }
           );

           th2.start();
           try{
           Thread.sleep(1000);
           }
           catch(InterruptedException ie){

           }
           th1.start();


           try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
           
            e.printStackTrace();
        }

        System.out.println(a.flag);
            
            
        
      }
}




// class A{
//      boolean flag=false;

//      void read(){
//           while(!flag){
//             // System.out.println("not reading");
//           }
//           flag=true;
//           System.out.println("reading done");
//      }

//      void write(){
//         while(flag){
//             System.out.println("not writing");

//         }
//         System.out.println("write");
//         flag=false;
//         System.out.println("Writing done");
//      }
// }
// public class VolatileKey {
//       public static void main(String[] args) {
           
//            A a=new A();
//            Thread th1=new Thread(
//             ()->{
//                 a.read();
//             }
//            );
//            Thread th2=new Thread(
//             ()->{
//                 a.write();
//             }
//            );

//            th1.start();
//            try{
//            Thread.sleep(1000);
//            }
//            catch(InterruptedException ie){

//            }
//            th2.start();
            
            
        
//       }
// }  // what is the issue here