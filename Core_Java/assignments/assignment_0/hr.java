class hr{
int id;
String name;
int salary;
int commission;
  }
class commission{
  public static void main(String[] args){
       hr h1;
       h1=new hr();

      h1.id=101;
      h1.name="Rahul";
      h1.salary=50000;
      h1.commission=5000;


    System.out.println("HR id"+h1.id);
    System.out.println("HR name"+h1.name);
    System.out.println("HR salary"+h1.salary);
    System.out.println("HR commission"+h1.commission);
  
 }
}