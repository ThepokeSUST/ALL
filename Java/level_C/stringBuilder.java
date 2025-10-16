public class stringBuilder {
      
    public static void main(String[] args) {
           
        // StringBuilder sdr=new StringBuilder("Dipok");
        // System.out.println(sdr);
        // sdr.append(" Nath");
        // System.out.println(sdr);
        // System.out.println(sdr.indexOf("Na",7));
        // int cap=sdr.capacity();
        // System.out.println(sdr.length());
        // System.out.println(cap);
        // sdr=new StringBuilder();
        // System.out.println(sdr.length());
        // System.out.println(sdr.capacity());


        





        StringBuilder sdr=new StringBuilder();
        System.out.println(sdr.capacity());
        sdr=new StringBuilder(10);
        System.out.println(sdr.capacity());
        sdr= new StringBuilder("ok");
        System.out.println(sdr.capacity());
        sdr=new StringBuilder("o");
        System.out.println(sdr.capacity());

        sdr.append("Dipu");
        System.out.println(sdr);
        System.out.println(sdr.capacity());
        sdr.append("sdfgredsdfcd");
        System.out.println(sdr);
        System.out.println(sdr.capacity());
        sdr.append("Z");
        System.out.println(sdr.capacity());


    }
}
