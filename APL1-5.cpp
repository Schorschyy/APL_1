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
int print_square_numbers(void) {
    int quadratzahl = 0;
    int zaehler = 0;

    printf("Aufgabe 2 \n\nZahl\t Quadratzahl\n");
    for (zaehler = 1; zaehler <= 10; zaehler++)
    {
        quadratzahl = zaehler * zaehler;
        printf(" %i\t %i\n", zaehler, quadratzahl);
    }
    printf("\n\n");
    return 0;
}

int multiply(int faktor_1, int faktor_2)
{
    printf("Aufgabe 3:\n\n");
    int produkt = 0;
    if (faktor_1 < 0)
    {
        faktor_1 = abs(faktor_1);

        for (int z = 1; z <= faktor_1; z++)
        {
            produkt = produkt + faktor_2;
        }
        produkt = produkt * -1;

        return produkt;
    }
    else
    {
        for (int z = 1; z <= faktor_1; z++)
        {
            produkt = produkt + faktor_2;
        }

        return produkt;
    }

}


int bubble_sort()
{

    int tauschanzahl = 1;
    int feld[] = { 6, 0, 1, 3, 2, 4, 5 };

    printf("Aufgabe 4: Bubble-Sort\n\n");
    printf("Feld:\t \t %i\t %i\t %i\t %i\t %i\t %i\t %i\t \n==================================================================\n", feld[0], feld[1], feld[2], feld[3], feld[4], feld[5], feld[6]);

    for (int feldzaehler1 = 1; feldzaehler1 <= 20; feldzaehler1++)
    {
        for (int feldelement = 0; feldelement <= 6; feldelement++)
        {
            int feld_1 = feld[feldelement];
            int feld_2 = feld[feldelement + 1];

            if (feld_2 < feld_1)
            {
                feld[feldelement] = feld_2;
                feld[feldelement + 1] = feld_1;


                printf("Tausch %i (%i,%i):\t %i \t %i \t %i \t %i \t %i \t %i \t %i \n", tauschanzahl, feld_1, feld_2, feld[0], feld[1], feld[2], feld[3], feld[4], feld[5], feld[6]);
                printf("\n");

                tauschanzahl++;
            }

            if ((feld[0] < feld[1]) && (feld[1] < feld[2]) && (feld[2] < feld[3]) && (feld[3] < feld[4]) && (feld[4] < feld[5]) && (feld[5] < feld[6]))
            {
                return 0; //Abbruch, wenn alle Elemente sortiert sind
                printf("\n\n");
            }
        }
    }
}

int get_element(int feld_funf[], int feld_element)
{
    int* pointer_feldelement;
    pointer_feldelement = &feld_funf[feld_element];
    return *pointer_feldelement;
}

//int count_characters(char string_sechs, char zeichen_sechs)
//{
// strcmp(string_sechs, zeichen_sechs);
//}

int main(void) {

    printf("##########################################################################################\n\n");

    printf("Aufgabe 1: \n\nresult non-recursive %i^%i: %i \n", 4, 6, power_nonRecursive(4, 6));

    printf("result recursive %i^%i: %i \n\n\n", 4, 6, power_recursive(4, 6));

    printf("##########################################################################################\n\n");

    print_square_numbers();

    printf("##########################################################################################\n\n");

    printf("1.Faktor: %i * 2. Faktor: %i = Produnkt: %i \n\n\n", 7, -2, multiply(7, -2));

    printf("##########################################################################################\n\n");

    bubble_sort();

    printf("##########################################################################################\n\n");

    int feld_funf[] = { 12,23,4,5,67 };
    int feldelement = 3;

    int feldLength = sizeof(feld_funf)/ sizeof(feld_funf[0]);
    if(feldelement < feldLength)
    {
        printf("Aufgabe 5: Feldelement %i = %i\n\n", feldelement, get_element(feld_funf, feldelement));
    }
    else
    {
        printf("Aufgabe 5: Feldelement %i liegt ausserhalb des Arrays! Feldelement muss im Bereich [%i,%i] liegen\n\n"
                , feldelement, 0, feldLength-1);
    }

    printf("##########################################################################################\n\n");

    //char string_sechs[15] = "hallola welta";
    //char zeichen_sechs = "a";
    //count_characters(string_sechs, zeichen_sechs);

    return 0;
}
