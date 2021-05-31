//*Dep3_Prog6:
//Un cuente el numero de veces que ahorras y nos diga el acumulado de ahorro//
#include stidio.h>
int main()
{
    int banco; //acumulador//
    int monto; //monto o cantidad a ahorrar//
    int numdepositos; //la cantidad de veces que fui al banco//
    char letra;
    numdepositos=0;
    banco=0;
    monto=0;
    respuesta= 's';
    do
    {
       //voy al banco
        letra='s';
        printf("\n\n monto a depositar: ");
        scanf("%d", &monto);
        banco = banco + monto; //Acumulador//
        numdepositos = numdepositos + 1;
        printf("¿Quieres realizar otro deposito (s/n)?");
        scanf("%c", &letra);
    } while ( letra != 'n' ); //condicion//

    printf("Dinero que ienes en el banco %d", banco);
    printf("Numero de depositos %d",numdepositos);
    return 0;
}