class demo1
{
     private int a;
     private int b;
     private String c;

     public demo1()
     {
             System.out.println ("this is parameterized constructor");
     }

     public demo1(int a , int b)
     {
               this.a=a;
               this.b=b;
     }
     public demo1(int a , String c)
    {
        this.a=a;
        this.c=c;
    }
     public demo1(int a, String c, int b)
     {
        this.a=a;
        this.c=c;
        this.b=b;

     }
     void disp()
     {
       System.out.println(a);
         System.out.println(b);
          System.out.println(c);
     }
}

public class construct2 {
    
    public static void main(String[] args)
    {
          demo1 st= new demo1(12 ,23);
           demo1 tt= new demo1(12 ,"rohan",23);
            demo1 et= new demo1(12 ,"rohan");
          st.disp();
          tt.disp();
          et.disp();
    }
}
