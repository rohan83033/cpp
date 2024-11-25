package polymorphism;

class rohan {
    void caste() {
        System.out.println("rohan is srivastava");
    }

    void personality() {
        System.out.println("rohan is introvert");
    }
}

class suraj extends rohan {
    void caste() {
        System.out.println("suraj is yadav");
    }

    void personality() {
        System.out.println("suraj is ambivert");
    }
}

class usman extends rohan
 {
    void caste() {
        System.out.println("usman is sheik");
    }

    void personality() {
        System.out.println("usman is extrovert");
    }
}
class human
{
    void religion(rohan rt)
    {
      rt.caste();
      rt.personality();
      System.out.println("--------------");
    }
}


public class poly1 {
    public static void main(String[] args) 
    {
// parent can hold address of child but child cannot hold the parent address
        rohan rt = new rohan();

        suraj st = new suraj();

        usman ut = new usman();

        human a = new human();

        a.religion(st);
        a.religion(ut);
        a.religion(rt);

        



        // rt.caste();
        // rt.personality();

        // st.caste();
        // st.personality();

        // ut.caste();
        // ut.personality();
     
        
    }

}
