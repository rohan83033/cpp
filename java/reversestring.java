public class reversestring {
public static void main(String []args)

/*{
    String a= "rohan";
    String b= "";
    System.out.println(a);
    for (int i=a.length()-1;i>=0;i--)
    {
        b=b+a.charAt(i);
       
    }
    System.out.print(b);
    
} */

/*{
    String a= "rohan srivastava";
    String b="";
    String c[]=a.split(" ");

    for (int i=c.length-1;i>=0;i--)
    {
      b=  b+c[i]+" ";
    }
System.out.println(b);
}*/

{
    String a= "rohan srivastava";
    String b="";
    System.out.println(a);
    String c[]=a.split(" ");
        for (String elem: c)
        {
            for (int i=elem.length()-1;i>=0;i--)
            {
                b=b+elem.charAt(i);
                }
                b=b+" ";
        }
    System.out.println(b);
}
}
