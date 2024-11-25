import java.util.Scanner;
public class starprinting{

    public static void main (String []args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("enter the star line you want ");
        int n=scan.nextInt();
        System.out.println("how man star you want in one line");
        int p=scan.nextInt();
        for (int i=0;i<n;i++)
        {
            for(int j=1;j<=p;j++)
            {
                System.out.print("*");
                
            }
            System.out.println();
        }
    }

}