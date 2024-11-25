package interface01;
 // lambda expression and it is functional interface (it allow only one method)

interface car {
    //void drive(); non parameter
    void drive(int avg);
}

public class interface03 {
     
    public static void main (String[] args)
    {
       
      // car st =() ->  System.out.println("driving..."); 
         car st = avg -> System.out.println("driving...with avg" + avg);

         st.drive(16);
   }
}