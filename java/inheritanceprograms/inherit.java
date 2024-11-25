package inheritanceprograms;
 class human // main class // super class
 {
   
    int age;

    human()
    {
        System.out.println("human is constructor");// constructor will not inherited`
    }
     void sleep()
     {
        age=18;
        System.out.println("human needs good sleep");
        System.out.println(age);
     }
 }
 class student extends human // child class //sub class // derived class
 {
    void disp()
    {
        System.out.println("the age is :" + age);
      // System.out.println("the name is :" + name);   
    }
    
 }


public class inherit {

    public static void main(String [] args)
    {
        student st = new student();
        st.sleep();
    }
    
}
