


class Animal{
    private int p=33;
    int m;
    static int mm=77;
    Animal(int m){
        this.m=m;
    }
    void bark(){
            System.out.println(p);
            System.out.println("Animal Animal");
    }
}


interface itrfce{
       
    void m();
    default void n(){
        System.out.println("this is default n method\n");
    }
}


public class LambdaExp {


    public static void main(String[] args) {
             Animal dog= new  Animal(7){

                {
                    System.out.println("instance block one");
                    m=10;
                }
                // m=10;
                // mm=555;
                {
                    System.out.println("instance block two");
                    mm=9;
                    System.out.println(mm);
                }
                static{
                    System.out.println("static block one");
                    mm=4;
                    
                }
                void bark(){
                    System.out.println("..........................");
                    System.out.println(m);
                    // System.out.println(p);//p is not visible
                    System.out.print(a);
                    System.out.println(" "+b);
                    System.out.println("geu geu");
                    m();
                    System.out.println("...........................");
                }
                void m(){
                    System.out.println("another method m()");
                }

                int a=90;
                int b;

             };

               System.out.println(dog.m);
               dog.bark();
            //    dog.m();
            System.out.println(",,,,,,,,,");
            dog.bark();


            System.out.println("Anonymous class ");

        

    }
    
    
}
