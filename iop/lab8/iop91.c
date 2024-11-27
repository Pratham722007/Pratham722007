#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter any number : ");
scanf("%d",&n);
int *ptr;
ptr=&n;
printf("cube of number : %d ",((*ptr)*(*ptr)*(*ptr)));
printf("sqare of number : %d ",((*ptr)*(*ptr)));
return 0;
}