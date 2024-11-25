public class palindrome {
    public static void main (String []args)
    {
        String a=new String ("madam");
        String b="";
        for (int i=a.length()-1;i>=0;i--)
        {
            b=b+a.charAt(i);
        }
        System.out.println(a);
        System.out.println(b);
        if(a.equals(b))
        {
            System.out.println("thus string is palindrome");
        }
        else 
        {
            System.out.println("this string is not a palindrome");
        }
    }
    
}
