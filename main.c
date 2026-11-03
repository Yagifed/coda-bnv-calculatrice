#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	char symbol;
    double nb1;
    double nb2;
    double result;
    printf("Bienvenue dans le programme de calculatrice\n");
	printf("Choisissez une operation: +, -, *, /, %%\n");
	scanf(" %c", &symbol);
	printf("Saisissez le premier nombre\n");
	scanf("%lf", &nb1);
	printf("Saisissez le deuxieme nombre\n");
	scanf("%lf", &nb2);
	if (symbol == '+')
	{
		printf("addition\n");
        result = nb1 + nb2;
	}
	else if (symbol == '-')
	{
		printf("soustraction\n");
        result = nb1 - nb2;
	}
	else if (symbol == '*')
	{
		printf("multiplication\n");
        result = nb1 * nb2;
	}
	else if (symbol == '%')
	{
		printf("modulo\n");
        result = fmod(nb1, nb2);
	}
	else if (symbol == '/')
    {
        printf("division\n");
        result = nb1 / nb2;
    }
    else
    {
        printf("operation non reconnue\n");
    }
    printf("%.0f %c %.0f = %.2f", nb1, symbol, nb2, result);
	exit(0);
}