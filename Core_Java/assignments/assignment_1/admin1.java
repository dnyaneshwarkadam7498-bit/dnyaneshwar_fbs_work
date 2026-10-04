class admin1{
   int id;
   String name;
   int salary;
   int allowance;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setsalary(int i){
     this.salary=i;
    }
  
     void setallowance(int i){
     this.allowance=i;
    }



  void display(){
      
      System.out.println("HR ID:"+this.id);
      System.out.println("HR Name:"+this.name);
      System.out.println("HR Salary:"+this.salary);
      System.out.println("HR allowance:"+this.allowance);
     }
  }
   class allowance1{
     public static void main(String[] args){

     admin1 a1;
     a1= new admin1();


     a1.setID(101);
     a1.setname("rahul");
     a1.setsalary(50000);
     a1.setallowance(5000);

     System.out.println(a1);
     
     a1.display();
   
}
}