#include<stdio.h>
int input_n()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
  }
  void input_array(int n,int a[n])

{
  for(int i=0;i<n;i++)
  {
    printf("Enter the elemnt no %d of of the array\n",i);
    scanf("%d",&a[i]);

  }
}
int find_array_sum(int n, int a[n])
{
  int sum =0;
  for(int i=0;i<n;i++)
  {
    sum += a[i];
  }
  return sum;

}
int show_result(int n,int a[n],int sum)
{
  int i;
  printf("the sum of:");
  for(i=0;i<n-1;i++)
  {
    printf("%d=%d",a[i],sum);
  }
  printf("%d=%d",a[i],sum);

}
int main()
{
  int n, sum;
  n=input_n();
  int a[n];
  input_array(n,a);
  sum=find_array_sum(n,a);
  show_result(n,a,sum);
}