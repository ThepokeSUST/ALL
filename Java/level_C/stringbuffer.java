

public class stringbuffer {
    public static void main(String[] args) {
        //  StringBuffer sbr=new StringBuffer();
        //  System.out.println(sbr.length());
        //  sbr.append("dipok");
        //  System.out.println(sbr);
        //  String str=" nath";
        //  sbr.append(str);
        //  System.out.println(sbr);







        // StringBuffer sbr=new StringBuffer("Hellow");
        // System.out.println(sbr);
        // sbr.insert(3, 10);
        // System.out.println(sbr);
        // sbr.delete(3, 5);
        // System.out.println(sbr);
        // sbr.replace(0, sbr.length(), "Zzz");
        // System.out.println(sbr);







        // StringBuffer sbr=new StringBuffer();
        // System.out.println(sbr.length());
        // System.out.println(sbr.capacity());
        // sbr.append("b");
        // System.out.println(sbr);
        // System.out.println(sbr.capacity());
        // for(int i=0;i<15;i++){
        //     sbr.append('a');
        // }
        // System.out.println(sbr+" "+sbr.length());
        // System.out.println(sbr.capacity());
        // sbr.append('l');
        // System.out.println(sbr.capacity());









        StringBuffer sbr=new StringBuffer();
        // sbr.setLength(0);
        System.out.println(sbr.length());
        System.out.println(sbr);
        System.out.println(sbr.capacity());
        sbr.setLength(5);
        System.out.println(sbr.length());
        System.out.println(sbr.capacity());
        System.out.println(sbr+"dipok");
        sbr.append("ok");
        System.out.println(sbr);
        System.out.println(sbr.length());
        char ch=sbr.charAt(5);
        System.out.println(ch);
        sbr.replace(0, 3, "ok");
        System.out.println(sbr);
        System.out.println(sbr.length());
        System.out.println(sbr.charAt(2));
        System.out.println(sbr.charAt(3));
        System.out.println(sbr.charAt(4));

    }
}
