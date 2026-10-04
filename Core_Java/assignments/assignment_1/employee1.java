class employee1{
   int id;
   String name;
   int salary;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setsalary(int i){
     this.salary=i;
    }


  void display(){
      
      System.out.println("employee ID:"+this.id);
      System.out.println("employee Name:"+this.name);
      System.out.println("employee Salary:"+this.salary);
     }
  }
   class salary1{
     public static void main(String[] args){

     employee1 e1;
     e1= new employee1();


     e1.setID(101);
     e1.setname("rahul");
     e1.setsalary(50000);

     System.out.println(e1);
     
     e1.display();
   
}
}