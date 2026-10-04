class HR1{
   int id;
   String name;
   int salary;
   int commission;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setsalary(int i){
     this.salary=i;
    }
  
     void setcommission(int i){
     this.commission=i;
    }



  void display(){
      
      System.out.println("HR ID:"+this.id);
      System.out.println("HR Name:"+this.name);
      System.out.println("HR Salary:"+this.salary);
      System.out.println("HR commission:"+this.commission);
     }
  }
   class commission1{
     public static void main(String[] args){

     HR1 h1;
     h1= new HR1();


     h1.setID(101);
     h1.setname("rahul");
     h1.setsalary(50000);
     h1.setcommission(5000);

     System.out.println(h1);
     
     h1.display();
   
}
}