class student
{
   private int age ;
   private  String name;
    
    void setAge(int age)
    {
       this.age = age;
       
    }
    void setName(String name)
    {
       this.name = name;
    }
    //"this" is use to solve shadowing problem
    void show()
        {
             System.out.println(age + " " + name);
        }
     
}
  
class encap
{
    public static void main (String[] args)
    {
     student obj = new student() ;
     student obj1 = new student();
     obj1.setAge(40);
     obj1.setName("rahul");
     obj.setAge(18);
     obj.setName("rohan");
     obj.show();
     obj1.show();
    }
}
