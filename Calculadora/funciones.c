#include <stdio.h>

int PedirNumero()
{
    int numero;
    printf("Ingrese un numero por favor \n");
    scanf("%d", &numero);
    return numero;
}

int SumarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno + dos;
    return resultado;
}

int RestarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno - dos;
    return resultado;
}

int DividirNumeros(int uno, int dos)
{
    int resultado = 0;
    char* mensajeError = "No se puede dividir por 0 \n";
    if(uno != 0 && dos != 0)
    {
        resultado = uno / dos;
        return resultado;
    } else
    {
       return mensajeError;
    }

}

int MultiplicarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno * dos;
    return resultado;
}

int CalcularFactorial(int n)
{

    int resp;
    if(n==1)
    return 1;
    resp=n*CalcularFactorial(n-1);
    return (resp);

}




