#include<stdio.h>
int main() 
{
int a,b,sum;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
sum =a+b;
printf("%d + %d= %d\n");
return 0;
}

#include<stdio.h>
int input()
{
  int a;
  printf("Ente a number\n");
  scanf("%d",&a);
  return a;
}
int find_sum(int a,int b)
{
  int sum ;
  sum = a+b;
  return sum;
}

void output(int a,int b,int c)
{
  printf("Sum of %d + %d is %d\n",a,b,c);
}

int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=find_sum(x,y);
  output(x,y,z);
  return 0;
}
