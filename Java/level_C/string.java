
import java.util.Arrays;
import java.lang.Math;
import java.lang.CharSequence;
import java.lang.String;
public class string {
      
    public static void main(String[] args) {



        //   String str="Dipok";
        //   String str1="Dipok";
        //   System.out.println((str==str1));
        // String str2=new String("Dipok");
        // System.out.println(str==str2);
        // System.out.println(str1==str2);
        // System.out.println(str.equals(str2));

        // char ch=str.charAt(0);
        // System.out.println(ch);
        // System.out.println(str.length());






        // String str="ms";
        // String strconcat=str.concat(" Dhoni");
        // System.out.println(str);
        // System.out.println(strconcat);
        // StringBuilder sbr=new StringBuilder("ms");
        // // sbr.concat(" Dhoni");
        // sbr.append(" Dhoni");
        // System.out.println(sbr);
        






        // byte b=127;
        // System.out.println(b);
        // byte b[]={65,66,68,67};
        // System.out.println(Arrays.toString(b));
        // String str=new String(b);
        // System.out.println(str);
        // String strr=new String(b,2,2);
        // System.out.println(strr);
        





        // String str="Aipok";
        // String str1="Dipok";

        // System.out.println(str.compareTo(str1));
        // str="dipok";
        // str1="Dipok";
        // System.out.println(str.compareTo(str1)+" "+ ('d'-'D'));
        // System.out.println(str.compareToIgnoreCase(str1));
        // System.out.println(str.compareTo(str));

        // str.toUpperCase();
        // System.out.println(str);
        // System.out.println(str.toUpperCase());
        // System.out.println(str.toLowerCase());
        // str="ABCDE";
        // System.out.println(str.codePointAt(str.length()-1));
        // System.out.println(str.codePointBefore(1));
        // System.out.println(str.codePointBefore(str.length()));

        // System.out.println(str.contains("A"));
        // System.out.println(str.contentEquals("ABCDEj"));
        // StringBuilder sbuild=new StringBuilder("ABCDE");
        // System.out.println(str.contentEquals(sbuild));
        // System.out.println(str.endsWith("BCDE"));
        // System.out.println();
        // str="ABC D";
        // System.out.println(str);
        // byte b[]=str.getBytes();
        // System.out.println(Arrays.toString(b));
        // System.out.println();
        
        // str="AABBCADAAECED";
        // System.out.println((str));
        // System.out.println(str.replace('A', 'Z'));
        // System.out.println(str);
        // System.out.println(str.replace("AA", "aa"));
        // System.out.println(str.replaceFirst("AA", "aa"));


        //reversing a string using concate() method 

        String a="abcd";
        String b="";

        for(int i=a.length()-1;i>=0;i--){
             
            String c=Character.toString(a.charAt(i));
            b=b.concat(c);

        }
        System.out.println(a+"\n"+b);


    }
}
