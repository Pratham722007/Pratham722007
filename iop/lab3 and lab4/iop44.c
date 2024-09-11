#include<stdio.h>
int main(){
int a,b,c;
printf("enter a consumption in unit:");
scanf("%d",&a);
if(a<=200)
{
    b=a*0.5;
    printf("distribution is %d",b);

}
else if(201<=a&&a<=400 ){
    b=100+(a-200)*0.65;
     printf("distribution is %d",b);

}
else if(401<=a&&a<=600 ){
    b=230+(a-400)*0.80;
     printf("distribution is %d",b);

}
else(a>=600 );{

    b=425+(a-600)*1.25;
     printf("distribution is %d",b);

}


return 0;
}