class teachar1{
   int id;
   String name;
   String subject;
     

   void setID(int i){
     this.id=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setsubject(String i){
     this.subject=i;
    }


  void display(){
      
      System.out.println("Teachar ID:"+this.id);
      System.out.println("Teachar Name:"+this.name);
      System.out.println("Teachar Salary:"+this.subject);
     }
  }
   class subject1{
     public static void main(String[] args){

     teachar1 t1;
     t1= new teachar1();


     t1.setID(101);
     t1.setname("rahul");
     t1.setsubject("maths");

     System.out.println(t1);
     
     t1.display();
   
}
}