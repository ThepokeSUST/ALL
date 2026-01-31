public class finalize {
      public static void main(String[] args) {
           System.out.println("start");
        finalize f=new finalize();
        f=null;
        System.gc();
        System.out.println("end");
        
      }

      @Override
      public void finalize() {
       
           System.out.println("hello finalized");
      }
}
