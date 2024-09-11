#include<stdio.h>
int main(){
int n;
printf("Enter odd number: ");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    printf("%d, ",i);
    i++;
}


return 0;
}