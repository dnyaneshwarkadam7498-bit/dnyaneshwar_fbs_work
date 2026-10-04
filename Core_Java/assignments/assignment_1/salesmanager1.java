class salesmanager1{
   int id;
   String name;
   int salary;
   int incentive;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setsalary(int i){
     this.salary=i;
    }
  
     void setincentive(int i){
     this.incentive=i;
    }



  void display(){
      
      System.out.println("manager ID:"+this.id);
      System.out.println("manager Name:"+this.name);
      System.out.println("manager Salary:"+this.salary);
      System.out.println("manager incentive:"+this.incentive);
     }
  }
   class incentive1{
     public static void main(String[] args){

     salesmanager1 s1;
     s1= new salesmanager1();


     s1.setID(101);
     s1.setname("rahul");
     s1.setsalary(50000);
     s1.setincentive(5000);

     System.out.println(s1);
     
     s1.display();
   
}
}