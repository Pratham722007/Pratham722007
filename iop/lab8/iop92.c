#include<stdio.h>
int main(){
int n,max=-214874;
printf("Enter a number: ");
scanf("%d",&n);
int a[n];
int *aptr;
aptr=a;
for (int i = 0; i < n; i++)
{
    scanf("%d",aptr+i);
}
for (int i = 0; i < n; i++)
{
    printf("%d\n",*(aptr+i));
}
for (int i = 0; i <n; i++)
{
    if(*(aptr+i)>max)
    {
        max=*(aptr+i);
    }
}
printf("biggest number is %d",max);

return 0;
}