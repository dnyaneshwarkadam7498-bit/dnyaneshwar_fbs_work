class player1{
   int jersyno;
   String name;
   int runs;
     

   void setjersyno(int i){
     this.jersyno=i;
    }

    void setname(String i){
     this.name=i;
    }

    void setruns(int i){
     this.runs=i;
    }


  void display(){
      
      System.out.println("player jersyno:"+this.jersyno);
      System.out.println("player Name:"+this.name);
      System.out.println("player runs:"+this.runs);
     }
  }
   class runs1{
     public static void main(String[] args){

     player1 p1;
     p1= new player1();


     p1.setjersyno(101);
     p1.setname("rahul");
     p1.setruns(50);

     System.out.println(p1);
     
     p1.display();
   
}
}