#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
sacnf("%d%d%d",&a,&b,&c);
if(a>=b)
{
if(a>=c)
printf("A is greater");
else
printf("C is greater");
}
else
{
if(b>=c)
printf("B is greater");
else
printf("C is greater");
}
return 0;
}


