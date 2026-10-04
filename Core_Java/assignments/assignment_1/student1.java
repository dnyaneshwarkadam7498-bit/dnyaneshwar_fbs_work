class student1{
   int id;
   String name;
   int marks;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setmarks(int i){
     this.marks=i;
    }


  void display(){
      
      System.out.println("Student ID:"+this.id);
      System.out.println("Student Name:"+this.name);
      System.out.println("Student Salary:"+this.marks);
     }
  }
   class marks1{
     public static void main(String[] args){

     student1 s1;
     s1= new student1();


     s1.setID(101);
     s1.setname("rahul");
     s1.setmarks(50);

     System.out.println(s1);
     
     s1.display();
   
}
}