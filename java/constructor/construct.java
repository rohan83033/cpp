class student 
{
    private String name;
    private int age ;
    
    student (String name , int age)
    {
        this.name=name;
        this.age=age;
    }
    //  public void setName(String name)
    //  {
    //     this.name = name;
    //  }
    //  public void setAge(int age)
    //  {
    //     this.age=age;
    // }
    public String getName()
    {
        return name;
    }
    public int getAge()
    {
        return age;
    }
}

public class construct {
     
    public static void main (String[] args)
    {
        student st = new student("rohan",23);
        // st.setName("rohan");
        // st.setAge(23);

        String name=st.getName();
        System.out.println(name);
        
        int age= st.getAge();
        System.out.println(age);
    }
}
