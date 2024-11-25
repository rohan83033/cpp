package inheritanceprograms;
class demo1
{
   void  t()
     {
     System.out.println("this parent class");
     }
}
class demo2 extends demo1
{
     void r()
     {
     System.out.println("this 2nd class");
     }
}
class demo3 extends demo1
     {
          void y()
          {
               System.out.println("this is 3rd class");
          }
          
     }
public class inheritance2 {
     public static void main(String[] args)
     {
            demo3 st = new demo3();
            st.y();
           // st.r();
            st.t();
     }
}
