class calculator{
   void add(int a, int b){
   System.out.println(a+b);
   System.out.println("void add(int a, int b)");
  }

    void add(double a, int b){
   System.out.println(a+b);
   System.out.println("void add(double a, int b)");
  }

    void add(int a, double b){
   System.out.println(a+b);
   System.out.println("void add(int a, double b)");
  }

   void add(double a, double b){
   System.out.println(a+b);
   System.out.println("void add(double a, double b)");
  }

  void sub(int a, int b){
   System.out.println(a-b);
   System.out.println("void sub(int a, int b)");
  }

    void sub(double a, int b){
   System.out.println(a-b);
   System.out.println("void sub(double a, int b)");
  }

    void sub(int a, double b){
   System.out.println(a-b);
   System.out.println("void sub(int a, double b)");
  }

   void sub(double a, double b){
   System.out.println(a-b);
   System.out.println("void sub(double a, double b)");
  }


   void mul(int a, int b){
   System.out.println(a*b);
   System.out.println("void mul(int a, int b)");
  }

    void mul(double a, int b){
   System.out.println(a*b);
   System.out.println("void mul(double a, int b)");
  }

    void mul(int a, double b){
   System.out.println(a*b);
   System.out.println("void mul(int a, double b)");
  }

   void mul(double a, double b){
   System.out.println(a*b);
   System.out.println("void mul(double a, double b)");
  }


   void div(int a, int b){
   System.out.println(a/b);
   System.out.println("void div(int a, int b)");
  }

    void div(double a, int b){
   System.out.println(a/b);
   System.out.println("void div(double a, int b)");
  }

    void div(int a, double b){
   System.out.println(a/b);
   System.out.println("void div (int a, double b)");
  }

   void div(double a, double b){
   System.out.println(a/b);
   System.out.println("void div(double a, double b)");
  }

}

// class calculator ends here

 class test_overloading{
     public static void main(String [] args){
      calculator c1=new calculator();
     c1.add(10,10);
     c1.add(10.5,10);
     c1.add(10,10.5);
      c1.add(10.5,10.5);

      calculator c2=new calculator();
     c2.sub(10,10);
     c2.sub(10.5,10);
     c2.sub(10,10.5);
      c2.sub(10.5,10.5);
     
        calculator c3=new calculator();
     c3.mul(10,10);
     c3.mul(10.5,10);
     c3.mul(10,10.5);
      c3.mul(10.5,10.5);


        calculator c4=new calculator();
     c4.div(10,10);
     c4.div(10.5,10);
     c4.div(10,10.5);
      c4.div(10.5,10.5);

 }
}

