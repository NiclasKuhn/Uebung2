/* Pythagoras.c
Programm zur Berechnung
Autor/Autorin: Niclas Kuhn
Datum: 19.11.2019
Kontakt: nickuhn@htwsaar.de
Compile: gcc -Wall -pedantic -std=c99 -o Pythagoras Pythagoras.c
*/

#include <stdio.h>

int main (void)
{
    int n = 0;
    int c2 = 0;

    printf("Bitte n eingeben: ");
    scanf("%i", &n);
    printf("\n");
        for(int a = 1; a<=n; a++)
        {
            for(int b = a+1; b<=n; b++)
            {
                for(int c = 1; c<=n; c++)
                {
                    c2 = a*a + b*b;

                    if(c2 == c*c)
                    {   
                        printf("Fuer a = %2i, b = %2i, c = %2i: %3i + %3i = %3i\n", a, b, c, a*a, b*b, c2);
                    }
                }
                
            }
            
        }
    return 0;
}