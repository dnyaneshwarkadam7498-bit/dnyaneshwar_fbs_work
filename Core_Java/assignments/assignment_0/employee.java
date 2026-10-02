class employee{
     int id;
     String name;
     int salary;
    }
class salary{
  public static void main(String[] args){
     employee e1;
     e1=new employee();
     
      e1.id=101;
      e1.name="Dnyaneshwar";
      e1.salary=50000;

     System.out.println(e1);

     System.out.println("employee id"+e1.id);
     System.out.println("employee name"+e1.name);
     System.out.println("employee salary"+e1.salary);
    }
  }