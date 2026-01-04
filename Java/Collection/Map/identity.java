import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.TreeMap;


public class identity {


    public static void main(String[] args) {
          
            // Map<String,Integer>  identity= new IdentityHashMap<>();

            // identity.put("dipok", 1);
            // identity.put("dipu", 2);
            // identity.put("fipok", 3);
            // identity.put("fipu", 4);

            // System.out.println(identity);
            // identity.put("dipok", 5);
            // System.out.println(identity);
            // System.out.println();
            // System.out.println(identity.get("dipok"));
            // System.out.println(identity);



    
            // .........................


            // Map<String,Integer> hashmap=new HashMap<>();
            // String str="dipok";
            // String str1="dipu";
            // String str2="dipok";

            // hashmap.put(str, 1);
            // hashmap.put(str1, 2);
            // hashmap.put(str2, 3);
            // System.out.println(hashmap);

            // hashmap.clear();

            // str=new String("dipok");
            // str1=new String("dipu");
            // str2=new String("dipok");

            // hashmap.put(str, 1);
            // hashmap.put(str1, 2);
            // hashmap.put(str2, 3);
            // System.out.println(hashmap);
            

            // Map<String,Integer> identity=new IdentityHashMap<>();
            //  identity.put(str, 1);
            // identity.put(str1, 2);
            // identity.put(str2, 3);
            // System.out.println(identity);



            // System.out.println();
            // Map<String,Integer> linkedmap=new LinkedHashMap<>(10,0.75f,true);
            //  linkedmap.put(str, 1);
            // linkedmap.put(str1, 2);
            // // linkedmap.put(str2, 3);
            // System.out.println(linkedmap);

            // linkedmap.put("dipok", 5);
            // System.out.println(linkedmap);






            //.....................

            Map<String,Integer> treemap=new TreeMap<>();

            String str="dipok";
            String str1="dipu";
            String str2="dipok";
            treemap.put(str, 1);
            treemap.put(str1, 2);
            treemap.put(str2, 3);
            treemap.put("a", null);

            System.out.println(treemap);
            




    }
    
}
