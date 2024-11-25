package Static;

class demo {
void temp()
{
    System.out.println("normal display");
}
 static void disp()
 {
     System.out.println("static display");
 }
}
public class launchstatic {
    static int age;
    static
    {
        age=18;
        System.out.println("static block");
    }
    static void disp1()
    {
        System.out.println("disp method");
    }
    public static void main(String[] args)
    {
        System.out.println("main method");
         disp1() ;
         demo.disp() ;
        
         demo r = new demo();
         r.temp();

    }

    
}
// if you want to execute any thing before main class then you have put the method or variable into static block

