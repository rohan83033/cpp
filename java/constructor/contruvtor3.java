class film
{
    private int age;
    private String name;

    public void setAge(int age)
    {
        this.age = age; 
    }
    public int getAge()
    {
        return age;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public String getName()
    {
        return name;
    }
    public void disp()
    {
    System.out.println("this seter and geter program");
    // System.out.println(age);
    // System.out.println(name);
    }
}

public class contruvtor3 {
     public static void main (String[] args)
     {
        film st = new film();
        st.setName("rohan");
        st.setAge(23);
         System.out.println( st.getAge());
         System.out.println(st.getName());  

        st.disp();
     }
}
