public class arrays{

    public static void main (String []args)
    {
        //1-d array

       /*  int nums[] ={2,3,4,5};
        int num[] = new int[5];
        num[1] = 5;

        String names[] ={"rohan","faizan","suraj"};
        for (int i=0;i<=2;i++)
        {
            System.out.println(names[i]);
        }
        
        System.out.println(num[1]);
        System.out.println(nums[2]);*/
    

       //2-d array
      /*  int hero[][]= {{5,8},{7,6},{3,4}};
       int hero[][]=new int[3][2];
       hero[0][0]=5;
       hero[0][1]=8;
       hero[1][0]=7;
       hero[1][1]=6;
       hero[2][0]=3;
       hero[2][1]=4;
       for(int i=0;i<=2;i++)
       {
         for (int j=0;j<=1; j++)
         {
            System.out.print(hero[i][j] + " ");
         }
         System.out.println();
       }
    }*/


       // jacked array
       int hero[][]= {{5,8,5,3},
                      {7,6},
                      {3,4,2}
                     };
      
       for(int i=0;i<=2;i++)
       {
         for (int j=0;j<hero[i].length; j++)
         {
            System.out.print(hero[i][j] + " ");
         }
         System.out.println();
       }


      
      }

    public static void sort(char[] ar1) {
    }

    public static boolean equal(char[] ar1, char[] ar2) {
        return false;
    }


}