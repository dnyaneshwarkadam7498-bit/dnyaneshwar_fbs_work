class student{
     int id;
     String name;
     int marks;
    }
class salary{
  public static void main(String[] args){
     student s1;
     s1=new student();
     
      s1.id=101;
      s1.name="Dnyaneshwar";
      s1.marks=95;
     System.out.println(s1);

     System.out.println("student id"+s1.id);
     System.out.println("student name"+s1.name);
     System.out.println("student salary"+s1.marks);
    }
  }