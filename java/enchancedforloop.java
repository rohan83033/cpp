public class enchancedforloop {
    public static void main(String[]args)
    {
        int hero[][]= {{5,8,5,3},
                       {7,6,3,2},
                       {3,4,2,9}
       };

for(int n[] :hero)
{
for (int b : n)
{
System.out.print(b + " ");
}
System.out.println();
}
    }
}
