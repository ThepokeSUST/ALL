public class DeadLockinMain {
    public static void main(String[] args) {
            
           System.out.println("entering to the dead-lock");
           try {
            Thread.currentThread().join();
        } catch (InterruptedException e) {
            
            e.printStackTrace();
        }

        System.out.println("end");
           
    }
}
