import java.util.Arrays;

public class anagram {
    public static void main (String []args)
    {
        String a= "school master";
        String b= "The classroom j";

      a= a.replace(" ","");
      b= b.replace(" ","");

      a=a.toLowerCase();
      b=b.toLowerCase();

      char []ar1=a.toCharArray();
      char []ar2=b.toCharArray();

      Arrays.sort(ar1);
      Arrays.sort(ar2);

      if(Arrays.equals(ar1 ,ar2))
      {
        System.out.println("it is an anagram");
      }
      else 
      {
        System.out.println("it is not an anagram");
      }
    }
}
