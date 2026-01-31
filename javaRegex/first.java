import java.util.regex.Pattern;


public class first{
     public static void main(String[] args) {
          

        System.out.println("Hello");
        System.out.println(Pattern.matches("[xyz]", "x"));
        System.out.println(Pattern.matches("[xyz]", "y"));
        System.out.println(Pattern.matches("[xyz]", "z"));
        System.out.println(Pattern.matches("[xyz]", "q"));
        System.out.println(Pattern.matches("[^xyz]", "w"));
        System.out.println(Pattern.matches("[^xyz]", "x"));
        System.out.println(Pattern.matches("[^xyz]", "wxyzq"));

        System.out.println(Pattern.matches("[xyz]", "xy"));

        System.out.println();
        System.out.println(Pattern.matches("[a-z]", "A"));
        System.out.println(Pattern.matches("[a-z]", "a"));
        System.out.println(Pattern.matches("[a-z]", "az"));
        System.out.println(Pattern.matches("[a-zA-Z]", "A"));
        System.out.println(Pattern.matches("[a-zA-Z]", "Ab"));
        System.out.println(Pattern.matches("[A-z]", "A"));
        System.out.println(Pattern.matches("[A-z]", "a"));
        System.out.println(Pattern.matches("[A-z]", "ab"));
       
        System.out.println();
        System.out.println("?");
        System.out.println(Pattern.matches("a?", ""));
        System.out.println(Pattern.matches("a?", "a"));
      //   System.out.println(Pattern.matches("?a", ""));
        System.out.println(Pattern.matches("ab?", "ab"));
        System.out.println(Pattern.matches("ab?", "a"));
        System.out.println();
        System.out.println(Pattern.matches("a?b?", "a"));
        System.out.println(Pattern.matches("a?b?", ""));


        System.out.println(".");
        System.out.println(Pattern.matches(".", "a"));
        System.out.println(Pattern.matches(".", "d"));
        System.out.println(Pattern.matches(".", "ab"));
        System.out.println(Pattern.matches(".", ""));
        System.out.println(Pattern.matches(".", "`"));
        System.out.println(Pattern.matches("geeks.", "geeksf"));
        System.out.println(Pattern.matches("geeks.", "geeksforgeeks"));
        System.out.println(Pattern.matches("geeks.{2}", "geeksfo"));
        System.out.println(Pattern.matches("geeks.{2}", "geeksfoe"));
        System.out.println(Pattern.matches("geeks.*", "geeksforgeeks"));
        









        




        

      














        
     }
}