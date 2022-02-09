#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if (a!=b && a!=c && b!=c )
  {
    isscalene=1;
  }
  else 
  {
    isscalene=-1;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if (isscalene==1)
  {
    printf("the triangle is scalene\n");
  }
  else if(isscalene==-1)
  {
    printf("The triangle is not scalene\n");
  }
}
int main()
{
  int a,b,c,w;
  a=input_side();
  b=input_side();
  c=input_side();
  w=check_scalene(a,b,c);
  output(a,b,c,w);
  return 0;
}

