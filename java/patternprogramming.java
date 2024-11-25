import java.util.Scanner;
public class patternprogramming {

    public static void main (String[]args)
    {
        System.out.println ("enter the no. ");
        Scanner scan= new Scanner(System.in);
        int n=scan.nextInt();
        for(int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (i==j || i+j==n-1 || i==0 || j==0 || i==n-1 || j==n-1 ||i+j==(n-1)/2 || i-j==(n-1)/2|| j-i==(n-1)/2 ||i+j==n-1+(n-1)/2)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
              System.out.println();
        }
    

    }
}
