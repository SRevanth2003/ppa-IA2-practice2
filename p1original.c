#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base of the triangle:");
  scanf("%f",base);
  printf("enter the height of the triangle:");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("area of the triangle with %0.2f base and%0.2f height is %0.2f",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}