#include<stdio.h>
int main(){
    int num,i,r,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    
    while(num!=0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
        
    }
r=sum%10;
switch (r)
{
case 1:printf("one ");
             break;
                         case 2:
            printf("two");
            break;

            case 3:
            printf("three");
            break;

            case 4:
            printf("four");
            break;

            case 5:
            printf("five");
            break;

            case 6:
            printf("six");
            break;

            case 7:
            printf("seven");
            break;

            case 8:
            printf("eight");
            break;        

            case 9:
            printf("nine");
            break;

            case 0:
            printf("zero");
            break;
    
    


}
int q =(sum/10)%10;
switch(q){

case 1:printf("ten ");
             break;
                         case 2:
            printf("twenty");
            break;

            case 3:
            printf("thirty");
            break;

            case 4:
            printf("fourty");
            break;

            case 5:
            printf("fifty");
            break;

            case 6:
            printf("sixty");
            break;

            case 7:
            printf("seventy");
            break;

            case 8:
            printf("eighty");
            break;        

            case 9:
            printf("ninety");
            break;

}
int h=(sum/100)%10;
switch(h){
    case 1:printf("one hundred  ");
             break;
                         case 2:
            printf("two hundred");
            break;

            case 3:
            printf("three hundrede");
            break;

            case 4:
            printf("four hundred");
            break;

            case 5:
            printf("five hundred");
            break;

            case 6:
            printf("six hundred");
            break;

            case 7:
            printf("seven hundredn");
            break;

            case 8:
            printf("eight hundred");
            break;       

            case 9:
            printf("nine hundred");
            break;
    
    
}}