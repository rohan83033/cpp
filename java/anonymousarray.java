class calc 
{
   public int add (int a[])
    {
     int res=0 ;
     for(int n :a)
     {
        res=res+n;
     }
     return res;
    }
}

public class anonymousarray {
    
        public static void main(String[]args)
        {
           calc a =new calc();
          // int num[]={5,2,3,6};
           int res=a.add(new int[]{5,2,3,6});
           System.out.println(res);
        }
    
}
