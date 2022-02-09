#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int composite=0;
  for(int i=1;i<=n;i++)
  {
    
    if(n%i==0)
    {
      composite++;
    }

  }
  return composite;
}
void output(int n,int composite)
{
  if(composite>2)
  {
    printf("%d is composite number\n",n);
  }
  else if(composite<=2)
  {
    printf("%d is not composite number\n ",n);
  }
}
int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}