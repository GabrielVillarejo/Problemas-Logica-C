#include <stdio.h>
int main()
{
    int num, cont = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", cont);
            cont++;
            if (j < i)
            {
                printf(" ");
            }
        }
        printf("\n");
        cont = 1;
    }
    return 0;
}
