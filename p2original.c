#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1, num2,result;
printf("enter thr two numbers:\n");
scanf("%d %d",&num1, num2);
result = add(num1,num2);
printf("\nAddition of two numbers %d and %d is %d",num1,num2, result);

return 1;
} 
int add(int no.1, int no.2 )
{
  int res;
  res = no.1+no.2;
  return res;
}