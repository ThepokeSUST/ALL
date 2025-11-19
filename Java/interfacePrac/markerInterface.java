import java.lang.Cloneable;
import java.util.Arrays;


class A implements Cloneable{
     int a=9;
     int[] arr=new int[4];
     A(){
        for(int i=0;i<4;i++){
            arr[i]=i;
        }
     }

  public Object clone() throws CloneNotSupportedException{
       return super.clone();
     }

    final void showarr(){
        System.out.println("A "+Arrays.toString(arr));
     }
}

class C extends A{
     int a=3;
     int[] crr=new int[4];
     C(){
        for(int i=0;i<4;i++){
            crr[i]=i;
        }
     }
     void showcrr(){
        System.out.println("C"+Arrays.toString(crr));
     }
     public Object clone() throws CloneNotSupportedException{
        return super.clone();
     }
}


class B{
    int a=9;
     int[] arr=new int[4];
     B(){
        for(int i=0;i<4;i++){
            arr[i]=i;
        }
     }
        void showarr(){
        System.out.println("B"+Arrays.toString(arr));
     }
     @Override
     public Object clone() throws CloneNotSupportedException{
        return super.clone();
     }
}
public class markerInterface {
    public static void main(String[] args) throws CloneNotSupportedException {
                  
        A a=new A();
        A b=(A)a.clone();//in object class clone method is protected
        a.showarr();
        b.showarr();
        b.arr[1]=90;
        a.a=0;
        a.showarr();
        b.showarr();
        System.out.println(a.a);
        System.out.println(b.a);

        B aa=new B();
        B bb=new B();
        aa.showarr();
        bb.showarr();
       // bb=(B)aa.clone();//show cloneNotSupportedException because we dont implements cloneable interface in B class
        C cc=new C();
        C dd=new C();
        cc.showarr();
        cc.showcrr();
        dd.showcrr();
        dd=(C) cc.clone();
        cc.crr[2]=999;          
        System.out.print("dd ");
        dd.showcrr();
    }
}
