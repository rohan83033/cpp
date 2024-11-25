package interface01;

// this concept of inner class and how make the object of inner class 
class a {
    void disp() {
        System.out.println("this is disp");
    }

    // class b
    // {
    // void simp()
    // {
    // System.out.println("this is simp");
    // }
    // }
    static class b {
        void simp() {
            System.out.println("this is simp");
        }
    }
}

interface car {
    void drive();
}

public class interface02 {
     
    public static void main (String[] args)
    {
        a obj1 = new a();
        obj1.disp();

       // a.b obj2 = obj1.new b();// non-static object
        a.b obj2 = new a.b();   // static object
         obj2.simp();

         car st = new car() //this not a object of interface it is object of anonymous class
         {
               public void drive()
             {
                System.out.println("driving...");
             }
         }    ;
         st.drive();
   }
}