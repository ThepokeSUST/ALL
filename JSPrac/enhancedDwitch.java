import javax.management.RuntimeErrorException;

public class enhancedDwitch {
    public static void main(String[] args) {
          


             Character ch='A';
             var newVAr=switch (ch) {
                case 'A':
                    System.out.println("this is first");
                    yield "ok";
                   
             
                default:
                    throw new RuntimeErrorException(null);
             };

             System.out.println(newVAr);
    }
}
