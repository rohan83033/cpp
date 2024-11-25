package inheritanceprograms;

class Aeroplane
{
    public void takeoff()
    {
        System.out.println("aeroplane is going flying");
    }
   void fly()
    {
         System.out.println("plane is flying");
    }
}

class Cargoplane extends Aeroplane
{
    public void carrygood()
    {
      System.out.println("carrying goods from one place to another ");
    }
    public void fly()
    {
        System.out.println("carrgo is flying at lower height");
    }
}
class Passengerplane extends Aeroplane
{
        public void carrypassenger()
    {
      System.out.println("carrying passenger from one place to another ");
    }
}
public class inheritance3 {
     public static void main (String [] args)
     {
         Passengerplane pt = new Passengerplane();
         pt.takeoff();
         pt.fly();
         pt.carrypassenger();

         Cargoplane st = new Cargoplane();
         st.fly();
         st.carrygood();

     }
}
