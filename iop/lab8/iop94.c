#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
char ch1[100],ch2[100];
gets(ch1);
char *cptr1,*cptr2;
cptr1=ch1;
cptr2=ch2;
int len=strlen(ch1);
for (int j =len-1; j>=0; j--)
{
   *(cptr2+i)= *(cptr1+j);
   i++;
}

for (int k = 0; k <=len; k++)
{
    printf("%c",*(cptr2+k));
}


return 0;
}