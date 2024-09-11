#include<stdio.h>
int main(){
int a,b,c;
printf("enter a sales amount:");
scanf("%d",&a);
if(a<=500)

{
    b=(a*5)/100;
    printf("comission is %d",b);
}
if(a>500&&a<=2000)
{
    b=35+(a-500)/10;
      printf("comission is %d",b);
}
if(a>2000&&a<=5000)
{
    b=185+(a-2000)*12/100;
      printf("comission is %d",b);

}
if(a>5000)
{
    b=(a*12.5)/100;
      printf("comission is %d",b);
}
return 0;
}