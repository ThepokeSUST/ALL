

interface in{
       void m();
       default void n(){
              System.out.println("default n()");
       }
}
public class InterfaceAnony {
        public static void main(String[] args) {
                 
              in i=new in() {
                public void  m(){
                    System.out.println("m()");
                    mm();
                }

                void mm(){
                    System.out.println("mm()");
                }
              };

              i.m();
              i.n();
        }
}
