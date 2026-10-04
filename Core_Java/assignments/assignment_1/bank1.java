class bank1{
   int acNo;
   String name;
   int balance;
   int intrest;
     

   void setacNo(int i){
     this.acNo=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setbalance(int i){
     this.balance=i;
    }
  
     void setintrest(int i){
     this.intrest=i;
    }



  void display(){
      
      System.out.println("bank acNO:"+this.acNo);
      System.out.println("bank Name:"+this.name);
      System.out.println("bank balance:"+this.balance);
      System.out.println("bank intrest:"+this.intrest);
     }
  }
   class balance1{
     public static void main(String[] args){

     bank1 b1;
     b1= new bank1();


     b1.setacNo(1010989868);
     b1.setname("rahul");
     b1.setbalance(50000);
     b1.setintrest(10);

     System.out.println(b1);
     
     b1.display();
   
}
}