#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char str[100];
char *ptr;
ptr=str;
gets(str);
int i=0;
while(*(ptr+i)!='\0')
{
switch(*(ptr+i))
{
case 'a':  
case 'e':
case 'i':
case 'o':
case 'u': count++;
}
i++;
}
printf("\n the no of vowels are : %d",count);
return 0;
}