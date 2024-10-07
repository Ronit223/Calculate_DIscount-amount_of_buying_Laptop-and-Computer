#include<stdio.h>


int main()

{
  char name[20];
  char address[40];
  long int amount;
  double discount_rate;
  double discount;
  double net_amount;

  char ch;

  printf("Enter Name: ");
  gets(name);

  printf("Enter Address: ");
  gets(address);

  printf("Enter amount of purchase: ");
  scanf("%ld", &amount);

  printf("Enter type of purchase (L/C): ");
  scanf(" %c", &ch);

  if (amount <= 25000) {
    discount_rate = (ch == 'L') ? 0.0 : 5.0;
  }
  else if (amount <= 57001) {
   discount_rate = (ch == 'L') ? 5.0 : 7.5;
  }
  else if (amount <= 100000) {
   discount_rate = (ch == 'L') ? 7.5 : 10.0;
  }
  else {
   discount_rate = (ch == 'L') ? 10.0 : 15.0;
  }

  discount = (discount_rate / 100) * (double)amount;
  net_amount =(double)( amount -  discount) ;

  printf("Your net amount is: %0.2lf Sir %s.\nIt will delivered to %s", net_amount,name,address);

  return 0;
}
