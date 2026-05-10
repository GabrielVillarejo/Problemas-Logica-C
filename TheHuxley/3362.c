#include <stdio.h>
int main()
{
    int  x1, x2, expressao;

    scanf("%d", &x1);
    scanf("%d", &x2);

    for (int i = x1; i <= x2; i++)
    {
        expressao = (i*i) - 4*i + 5;
        printf("%d\n", expressao);
    }
    return 0;
}
