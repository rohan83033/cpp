public class conditional {
    public static void main (String []args)
    {
        int age=61;

        if(age >=18 && age < 60)
        {
             System.out.println("you are adult");
        }
        else if (age>=60)
        {
            System.out.println("you are old");
        }
        else 
        {
            System.out.println("invalid data");
        }
    }
}
