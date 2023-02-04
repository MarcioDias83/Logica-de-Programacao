#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float a, b, c, x1, x2, delta;
    x1=0;
    x2=0;
    delta=0;
    
    printf("Ax2 + Bx + C\n");
    printf("Informe o valor de A:\n");
    scanf("%f",&a);
    printf("Informe o valor de B:\n");
    scanf("%f",&b);
    printf("Informe o valor de C:\n");
    scanf("%f",&c);
    delta = (b * b)-(4*a*c);
    if(delta<0)
    {
        printf("Não existem raízes reais.");
    }
    else 
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("O valor de X1 é %.2f e o valor de X2 é %.2f", x1,x2);
    }
}
