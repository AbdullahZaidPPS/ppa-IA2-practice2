#include<stdio.h>
struct _triangle
{
  float base;
  float altitude;
  float area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("Enter base and altitude\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
  printf("The area of triangle with base = %f and altitude = %f is %f",t.base,t.altitude,t.area);

}
int main()
{
  Triangle t1;
  t1=input_triangle();
  find_area(&t1);
  output(t1);
  return 0;

}

