package Static ;

import java.util.Scanner;

class launchfarmer 
{
      int pa;
      float td;
      float ri;
      float si;

      void input()
      {
            Scanner scan =new Scanner (System.in);
            System.out.println("please enter the you required");
            pa=scan.nextInt();
            System.out.println("please mention time duration");
            td= scan.nextFloat();
            ri=5.8f;
      }

      void compute()
      {
            si=(pa*ri*td)/100f;
      }

      void disp()
      {
            System.out.println("SI is :" +si);
      }
}

public class programapp {
      public static void main (String[] args)
      {
             launchfarmer d= new launchfarmer();
             d.input();
             d.compute();
             d.disp();
      }
}
