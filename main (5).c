#include<stdio.h>
#include<math.h>
int dividetwo(int divi,int divis)
{
   int quotient=(divi/divis);
  quotient=floor(quotient);
  printf("%d",(quotient));
  }
int main()
{
int dividend;
  int divisor;
  printf("enter the dividend\n");
  scanf("%d",&dividend);
  printf("enter the divisor\n");
  scanf("%d",&divisor);
  dividetwo(dividend,divisor);

}
