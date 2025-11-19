

interface A{
    int b=999;
        void m();
        default void n(){
            System.out.println("defauls n() "+b);
            
            incls ca=new incls();
            ca.m();
        }

        class incls{
            int a=90;
            void m(){
                 System.out.println("class incls m()------------");
            }
        }
        
}

public class frominterface {
    public static void main(String[] args) {
           A a= new A() {
             int a=90;
            @Override
            public void m() {
                System.out.println("Abstract m()");
                System.out.println(a);
                System.out.println(b);
                mm();
                n();
                incls ina=new incls();
                ina.m();
            }

            void mm(){
                int a=8;

                System.out.println("inside anony mm()");
                System.out.println(a);
                System.out.println(this.a);
                System.out.println(b);
                n();
            }
           public void n(){
                 System.out.println("new implementation of default n()");
            }
            
           };
           a.m();


           A.incls inacls=new A.incls();
           inacls.m();
    }    
}
