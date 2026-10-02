class admin{
int id;
String name;
int salary;
int allowance;
  }
class allowance{
  public static void main(String[] args){
       admin a1;
       a1=new admin();

      a1.id=101;
      a1.name="Rahul";
      a1.salary=50000;
      a1.allowance=5000;


    System.out.println("HR id"+a1.id);
    System.out.println("HR name"+a1.name);
    System.out.println("HR salary"+a1.salary);
    System.out.println("HR allowance"+a1.allowance);
  
 }
}