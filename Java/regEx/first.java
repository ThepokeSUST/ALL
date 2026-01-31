

import java.util.regex.*;
public class first {
      public static void main(String[] args) {
            
            Pattern p= Pattern.compile("ab");
            Matcher matcher = p.matcher("abcd");
            // System.out.println(matcher.find())
            System.out.println(matcher.matches());
      }
}
