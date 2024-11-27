#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, count = 0;
    char ch[1000];
    char *cptr;
    gets(ch);
    cptr = ch;
    while (*(cptr + i) != '\0')
    {
        if (*(cptr + i) == ' ')
        {
            count++;
        }
        i++;
    }
    printf("\nnumber of words in the given sententence : %d", count + 1);
    return 0;
}