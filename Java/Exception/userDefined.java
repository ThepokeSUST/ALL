
class ExpA extends Exception {

}

public class userDefined {
    public static void main(String[] args) {
        try {
            System.out.println("in try");
            throw new Exception();
        } catch (Exception e) {
            System.out.println("in catch");
        } finally {
            System.out.println("1st finally block");
        }

        try {
            System.out.println("in try");
            throw new Exception();
        } catch (RuntimeException e) {
            System.out.println("in catch");
        } 
        catch(Exception e){
            System.out.println("in catch");
        }
        finally {
            System.out.println("1st finally block");
        }
    }
}
