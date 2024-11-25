package Static;

class work1
{
    static int a;
    static int b;

    int m;
    int n;

    static {
        a=10;
        b=20;
        System.out.println("control of static block");

    }
    {
        m=100;
        n=200;
        System.out.println("no static");
    }
    static void disp()
    {
        System.out.println("value of instance "+ a);
        System.out.println("value of instance "+ b);
    }
    void disp1()
    {
        System.out.println("value of instance "+ m);
        System.out.println("value of instance "+ n);
    }
    
}

public class objcheck {

    public static void main (String[] args)
    {
        work1 d = new work1();
        work1.disp();
     
        d.disp1();
    }
    
}
