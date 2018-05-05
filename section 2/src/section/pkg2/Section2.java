/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package section.pkg2;

import java.util.Scanner;

/**
 *
 * @author keroa
 */

    class Student 
    {
        private int student_id ;
        private float grade ;

        public void setStudent_id(int student_id) {
            this.student_id = student_id;
        }

        public void setGrade(float grade) {
            this.grade = grade;
        }

        public int getStudent_id() {
            return student_id;
        }

        public float getGrade() {
            return grade;
        }
        
    }
public class Section2 {

    /**
     * @param args the command line arguments
     */
    public static int  solve (int x,int y,int z)
    {
        return(x*y)/z ;
    }
    public static int  solve2 (double x, double y, double z)
    {
        return(int)(x+y+z)/3;
    }
    public static String solve3 (int x )
    {
        
        String []arr ={"null","jan","feb","march","april","may","june","july","augest","sep","oct","nov","Dec"};
        return arr[x];
    }
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println(solve (5,7,5));
        System.out.println(solve2 (3.5,5.0,6.3));
         System.out.println(solve3(3));
         System.out.println((24));
         Student s =new Student();
         Scanner k =new Scanner (System.in);
         s.setStudent_id(k.nextInt());
         s.setGrade(k.nextFloat());
         System.out.println(s.getStudent_id());
         System.out.println(s.getGrade());
         
    }
    
}
