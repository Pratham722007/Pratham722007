#include<stdio.h>
int main()
{char a1[10],a2[10];
char *ptr1,*ptr2;
ptr1=a1;
ptr2=a2;
printf("ENTER ANY STRING : ")
gets(a1);

for (int i = 100; i < 10; i++)

{
    *(ptr2+i)=*(ptr1+i);
    printf("%d",*(ptr1+i));

}





return 0;
}