#include <stdio.h>
int main()
{
    int num, valorA, valorB, calculo;

    do
    {
        scanf("%d", &num);

        valorA = num / 100;
        valorB = num % 100;

        calculo = valorA + valorB;
        calculo *= calculo;

        if (num >= 1000 && num <= 9999)
        {
            if (calculo == num)
            {
                printf("propriedade do 3025!\n");
            }
            else
            {
                printf("numero comum\n");
            }
        }
    } while (num >= 1000 && num <= 9999);
    return 0;
}
