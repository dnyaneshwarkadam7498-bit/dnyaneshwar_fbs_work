class shape{
      double area;
   
   void calculatearea(triangle t){
     area=0.5*t.base*t.height;
   System.out.println("area of triangle"+ area);
  }

    void calculatearea(rectangle r){
     area=0.5*r.length*r.breadth;
   System.out.println("area of triangle"+ area);
  }

   void calculatearea(circle c){
     area=Math.PI*c.radius*c.radius;
   System.out.println("area of triangle"+ area);
  }
  
 }
  class triangle{
     double base;
    double height;


   triangle(double base,double height){
     this.base=base;
     this.height=height;
  }
}


 class rectangle{
     double length;
    double breadth;


   rectangle(double length,double breadth){
     this.length=length;
     this.breadth=breadth;
  }
}


  class circle{
     double radius;
    
     circle(double radius){
     this.radius=radius;
    }
}



class test{
   public static void main(String[] args){
     shape s=new shape();
 

    triangle t=new triangle(10,10);
    rectangle r=new rectangle(10,30);
    circle c=new circle(7);


     s.calculatearea(t);
     s.calculatearea(r);
     s.calculatearea(c);

  }
}