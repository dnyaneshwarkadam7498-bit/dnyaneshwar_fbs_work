

class date{ 
          int day;
          int month;
          int year;
         }

class Test{
 	  public static void main(String[] args){

           date d1;
           d1=new date();
           d1.day=30;
           d1.month=07;
           d1.year=2026;

           System.out.println(d1);
           System.out.println("day is:"+d1.day);
           System.out.println("month is:"+d1.month);
           System.out.println("year is:"+d1.year);

          }
      }