public class stringcode2 {
    public static void main(String[]args)
    {
        String brand=new String("rohan");//if you use new keyword in string then object created outside the  heap
       // and in normal string object created in string constant pool(pcs) and in this duplicate are not allowed.
        System.out.println(brand);
        String s2 ="rohan";
        System.out.println(s2);
        System.out.println(brand==s2);
        System.out.println(brand.equals(s2));
        String s3 ="Rohan";
        System.out.println(s3);
        System.out.println(brand.equalsIgnoreCase(s3));//ignore case is use to ignore all the upper case and lower case 
        
    }
}
