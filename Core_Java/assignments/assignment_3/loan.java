class student{
   int id;
   String name;
   double percentage;

   student(int id,String name,double percentage){
      this.id=id;
      this.name=name;
     this.percentage = percentage;   }
}

 class employee{

   int id;
   String name;
   double annualsalary;

  employee(int id, String name, double annualsalary){
   this.id=id;
   this.name=name;
   this.annualsalary=annualsalary;
   }
}

class bank{

  void approveloan(student s){
   System.out.println("Student name"+s.name);
   
   if(s.percentage>80){
     System.out.println("loan Approved: Rs 2,00,000");
     }
   else if(s.percentage>=60){
    System.out.println("loan Approved: Rs 1,00,000");
    }
   else if(s.percentage>=40){
     System.out.println("loan Approved: Rs 50,000");
      }
    else{
       System.out.println("loan not approved!!");
    }
 }


void approveloan(employee e){
  System.out.println("employee name"+e.name);
    
       if(e.annualsalary>1200000){
        System.out.println("loan Approved : Rs. 7,00,000");
        }

      else if(e.annualsalary>=1000000){
          System.out.println("loan Approved: Rs. 6,00,000");
         }

      else if(e.annualsalary>=600000){
           System.out.println("loan approved: Rs.5,00,000");
         }  

      else if(e.annualsalary>=400000){
           System.out.println("loan approved: Rs. 4,00,000");
          }
       else{
          System.out.println("loan not approved!!");
         }
    }
}

   class test1{
      public static void main(String[] args){

             bank b=new bank();
       
           student s=new student(1,"rahul",89.67);
           employee e=new employee(101,"anooj",700000);

             b.approveloan(s);
              System.out.println();
             b.approveloan(e);
    }
}
     
