class test 
{
    int a;
    String name;

    public static void main(String []args)
    {
        int num= 9;
        test obj = new test();
        test obj2 = new test();

        obj2.name ="rohan";
        obj2.a =64 ;
         System.out.println(obj.a);
         System.out.println(obj.name);
          
        System.out.println(obj2.a);
        System.out.println(obj2.name);

    }
}
