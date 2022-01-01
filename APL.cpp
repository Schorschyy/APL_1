#include <stdio.h>
#include <math.h>

int power_nonRecursive(int base, int exponent)
{
    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int power_recursive(int base, int exponent)
{
    int result = base;
    if (exponent > 1)
    {

        result = power_recursive(base, --exponent) * base;
    }
    return result;
}



void bubble_sort()
{
    int feld[] = { 6, 0, 1, 3, 2, 4, 5 };
    printf("Feld:\t \t %i\t %i\t %i\t %i\t %i\t %i\t %i\t \n==================================================================\n", feld[0], feld[1], feld[2], feld[3], feld[4], feld[5], feld[6]);
    for (int feldzaehler1 = 1; feldzaehler1 <= 6; feldzaehler1++)
    {
        for (int feldzaehler2 = 0; feldzaehler2 <= 6; feldzaehler2++)
        {
            int feld_1 = feld[feldzaehler2];
            int feld_2 = feld[feldzaehler2 + 1];

            if (feld_2 < feld_1)
            {
                feld[feldzaehler2] = feld_2;
                feld[feldzaehler2 + 1] = feld_1;

                printf("Tausch( %i, %i):\t %i \t %i \t %i \t %i \t %i \t %i \t %i \n", feld_1, feld_2, feld[0], feld[1], feld[2], feld[3], feld[4], feld[5], feld[6]);
                printf("\n");
            }

            if ((feld[0] < feld[1]) && (feld[1] < feld[2]) && (feld[2] < feld[3]) && (feld[3] < feld[4]) && (feld[4] < feld[5]) && (feld[5] < feld[6]))
            {
                // was soll hier passieren? Oder Wozu ist diese Abfrage da?
                //return 0;
            }
        }
    }
}

int multiply(int a, int b)
{
    int x = 0;
    if (a < 0)
    {
        a = abs(a);

        for (int z = 1; z <= a; z++)
        {
            x = x + b;
        }
        x = x * -1;
        int result = x;
        return result;
    }
    else
    {
        for (int z = 1; z <= a; z++)
        {
            x = x + b;
        }

        int result = x;
        return result;
    }

}

int print_square_numbers(void) {
	int quadratzahl = 0;
	int z = 0;

	printf("Zahl\t Quadratzahl\n");
	for (z = 1; z <= 10; z++)
	{
		quadratzahl = z * z;
		printf(" %i\t %i\n", z, quadratzahl);
	}
	return 0;
}

int get_element(int feld[], int position)
{
    int *pointer;
    // setze den pointer an den Beginn des arrays
    pointer = feld;

    // sollte 'position' > als die Anzahl der Elemente im Array sein, 
    // wird der Zugriff auf einen Speicherbereich aushalb erfolgen.
    // dies sollte verhindert werden

    return *(pointer + position);    
}


int main(void) {
   
    printf("result non-recursive %i^%i: %i \n", 4, 6, power_nonRecursive(4, 6));

    printf("result recursive %i^%i: %i \n", 4, 6, power_recursive(4, 6));
   
    print_square_numbers();
    
    multiply(7, 2);
    
    bubble_sort();

    int digits[] = {0,1,2,3,4,5,6,7,8,9};
    int pos = 6;
    printf("element at position %i is: %i\n", pos, get_element(digits, pos));

    return 0;
}