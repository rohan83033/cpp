package interface01;

 interface a
 {
    void show();
 }
 interface c extends a
 {
    void confi();
 }

 class b implements c
 {
    public void show()
    {
        System.out.println("in show");
    }
    public void confi()
    {
        System.out.println("it's config");
    }
 }

public class interface1 {
    public static void main (String []args)
    {
        c st = new b();
         st.show();
         st.confi();
    }
    
}
