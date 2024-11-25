import java.util.Scanner;
public class scanneruse {
    public static void main(String []args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("enter the age");
        int age=scan.nextInt();
        System.out.println("age is " + age);
        System.out.println("enter the name ");
        String name= scan.next();
        System.out.println("name is " +name);
        System.out.println("enter the avg");
        float avg=scan.nextFloat();
        System.out.println("avg is "+avg);
    }
}
