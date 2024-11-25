package abstraction;

abstract class rohan 
{
// we use abstract key word when method do not have any body.
//so that class and method become abstract
// 100% abstract class do not have object beacuse it do not have body so it's incomplete
   abstract void caste() ;
   abstract  void personality() ;
   void char1()
   {
     System.out.println ("good person");
   }
}

class suraj extends rohan {
    void caste() {
        System.out.println("suraj is yadav");
    }

    void personality() {
        System.out.println("suraj is ambivert");
    }
    void working()
    {
        System.out.println("doing parttime work");
    }
}

class usman extends rohan
 {
    void caste() {
        System.out.println("usman is sheik");
    }

    void personality() {
        System.out.println("usman is extrovert");
    }
}
class human
{
    void religion(rohan rt)
    {
      rt.caste();
      rt.personality();
      System.out.println("--------------");
    }
}


public class abstract1 {
    public static void main(String[] args) 
    {
        rohan st = new suraj();

        rohan ut = new usman();

        human a = new human();

        a.religion(st);
        ((suraj)st).working();//this is called down casting in this we partiaaly change the 
                               //reference type for execution.
        a.religion(ut);

       
     
    }

}
