#include<stdio.h>
int main(){
int n;
printf("Enter even number: ");
scanf("%d",&n);
for (int i = 2; i <=n; i++)
{
    printf("%d, ",i);
    i++;
}


return 0;
}