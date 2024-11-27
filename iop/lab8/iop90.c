#include <stdio.h>
int main()
{
    char str[1000];
    int spn = 0, sp = 0;
    gets(str);
    char *ptr;
    ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr != ' ')
        {
            spn++;
        }
        else
        {
            sp++;
        }
        ptr++;
    }
    printf("with space : %d", spn + sp);
    printf("without space : %d", spn);
    return 0;
}