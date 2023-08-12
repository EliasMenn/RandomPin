#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void VectEnCero(int Vect[], int X);
int VerDato(int Dato, int LimInf, int LimSup);

int main()
{
 int vect[10];
 int flag = 0;
 int cantidadPin;
 VectEnCero(vect, 10);

 srand(time(NULL));
 printf("Please confirm if you wish to add character repetition (0) or not (1)");
 scanf("%d", flag);
 flag=VerDato(flag,0,1);
 if (flag==1)
 {
    printf("Please enter how many characters you wish to use for the pin code (Integer between 1 and 10)");
    scanf("%d", &cantidadPin);
    cantidadPin=VerDato(cantidadPin, 1, 10);
 }



}
void VectEnCero(int Vect[], int X)
{
    int i = 0;
    for(i=0;i<X;i++)
    {
        Vect[i]=0;
    }
}
int VerDato(int Dato, int LimInf, int LimSup)
{
    do
    {
        if(Dato<LimInf || Dato>LimSup)
        {
            printf("Please enter a valid number between %d and %d", LimInf, LimSup);
            scanf("%d", &Dato);
        }
    }
    while(Dato<LimInf || Dato>LimSup);
    return Dato;
}
