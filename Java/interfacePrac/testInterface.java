interface A{
    int a=999;
    void m();

}


class AA implements A{
      int a=888;
       public void m(){
             System.out.println("this is void m from class AA");
       }
}

public class testInterface {
    public static void main(String[] args) {
               
           AA aa=new AA();

    }    
}
