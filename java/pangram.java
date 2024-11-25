
public class pangram {

    public static void main(String []args)
    {
      boolean flag=false;
        String a="the Quick fox jumps over the lazy dog";
        a= a.replace(" ", "");
        a= a.toLowerCase();
        char []c=a.toCharArray();
        int b[]= new int[26];
        for(int i=0;i<c.length;i++)
        {
          b[c[i]-65]++;
        }
       for (int i=0;i<b.length;i++)
       {
        if (b[i]==0)
        {
        System.out.println("it is not pangram"); 
        flag=true;
       }
       if(flag==false)
       {
        System.out.println("it is a pangram");
       }
      }

    }
    
}
