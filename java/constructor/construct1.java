class demo
{
    private int a;
    private int b;

 // public demo() this 0 parameterised construct it iss added by default.
// {

// }
  public demo(int a, int b) // this is parameterised
  {
    this.a=a;
    this.b=b;  
  }
  public demo()
  {
    System.out.println("this zero parameterized");
  }

void disp()
{
 System.out.println(a);
 System.out.println(b);
}
}
public class construct1 {
    public static void main(String[] args)
    {
        demo st=new demo(12,32);
        st.disp();
        
        demo dt=new demo(63,25);
        dt.disp();
        
        demo et= new demo();
        et.disp();
    }
}
