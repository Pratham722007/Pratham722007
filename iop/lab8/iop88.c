#include<stdio.h>
int main()
{int a1[10],a2[10];
int *ptr1,*ptr2;
ptr1=a1;
ptr2=a2;
for (int i = 0; i < 10; i++)
{
scanf("%d",ptr1+i);
}
for (int i = 0; i < 10; i++)
{
    printf("%d ",*(ptr1+i));
}
for (int i = 0; i < 10; i++)

{
    *(ptr2+i)=*(ptr1+i);
    printf("%d",*(ptr1+i));

}





return 0;
}