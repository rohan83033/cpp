public class ternary {
    static public void main (String []args)
    {
        int a=100;
        int b=20;
        int c=300;
       // String res=(a<b)? (a<c)?"a is less":(b<a)? (b<c)? "b is less":"c is less":"b is greater than a":"a is greater than b";
       // System.out.println(res);
     //int num= (a<b)? (a<c? a: b): (b<a? (b<c? b:c):b);    
     //System.out.println(num);   
      if (a<b)
      {
        if(a<c)
        {
            System.out.println(a);
        }
        else{
            System.out.println(c);
        }
      }
      else if (b<a)
      {
        if(b<c)
        {
            System.out.println(b);
        }
        else
        {
            System.out.println(c);
        }
      }
      else 
      {
        System.out.println(c);
      }
    }
    
}
