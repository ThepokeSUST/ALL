



class PrintAble{

}

interface hello{

}
class A<T extends PrintAble & hello>{
      
}

class B extends PrintAble implements hello{

}


class C{

}
class D extends C{

}
class E extends C{

}




public class _1st {
    
     public static void main(String[] args) {
            
            A<B> a=new A<>();

     }
}
