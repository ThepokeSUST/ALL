


class classA{
     

    static class classB{
        int a;
        int c;
    }

    class classC{
        int d;
        int e;

    }
}

public class precClass {
    public static void main(String[] args) {
             classA classa=new classA();
             classA.classB classb=new classA.classB();
             classA.classC classc=classa.new classC();
    }    
}
