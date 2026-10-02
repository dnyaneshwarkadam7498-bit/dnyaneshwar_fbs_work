class BankAccount{
int acNo;
String name;
int balance;
int intrestrate;
  }
class intrest{
  public static void main(String[] args){
       BankAccount bank;
       bank=new BankAccount();

      bank.acNo=123456789;
      bank.name="Rahul";
      bank.balance=50000;
      bank.intrestrate=10;


    System.out.println("HR id"+bank.acNo);
    System.out.println("HR name"+bank.name);
    System.out.println("HR balance"+bank.balance);
    System.out.println("HR intrestrate"+bank.intrestrate);
  
 }
}