#include<stdio.h>
int main(){
    int n;
    printf("how many number of strings you want to enter : ");
    scanf("%d",&n);
    char str[n][100];
    char *ptr[n];
    
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    


return 0;
}