class calc 
{
    public int add(int n1, int n2)
    {
        int result = n1 + n2;
         
        return result ;
    }
    public int add(int n1, int n2, int n3)
    {
        int result = n1 + n2 + n3;
         
        return result ;
    }
    public double add(double n1,double n2)
    {
        double result = n1 + n2;
         
        return result ;
    }
}
public class demo {
    public static void main (String[] args)
    {
        calc obj = new calc();
       int a= obj.add (4,3);
       int b= obj.add(4,5,6);
       double c=obj.add(4.5,5.3);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
    
}
