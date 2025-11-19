
class outerA{
      
      interface innerface{
        int a=2;
        void m();
      }
}

class outerB implements outerA.innerface{
    public void m(){

    }

}
public class innerinter2 {
     public static void main(String[] args) {

           outerA.innerface i=new outerB();

     }
}
