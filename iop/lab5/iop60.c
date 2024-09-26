#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }}
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }

        return 0;
    }