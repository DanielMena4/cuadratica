#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//valida si el valor ingresado es un numero//
int validacion(char variable[3])
{
    for(int i = 0; i < strlen(variable);i++)
    {
        if(!(isdigit(variable[i])))
        {
        printf("\nNumero no valido");
        return 0;
        }
    }
    return 1;    
}
void discri(int *a,int *b, int *c)
{


}

int main()
{
    char variable[3];
    int a = 0, b = 0, c = 0, d = 0, validacion = 0,x = 0, menu = 0;
    while (menu != 5)
    {
        while (validacion != 1)
        {
            printf("1. Ingresar el valor de a\n2. Ingresar el valor de b\n3. Ingresar el valor de c\n4. Calcular x\n5. Salir\n");
            scanf("%s",variable);
        }
        menu = atoi(variable);
        switch (menu)
        {
        case 1:
        validacion = 0;
            while (validacion != 1)
            {
                scanf("%s",variable);
            }
            a = atoi(variable);
            break;
        case 2:
            validacion = 0;
            while (validacion != 1)
            {
                scanf("%s",variable);
            }
            b = atoi(variable);
            break;
        case 3:
            validacion = 0;
            while (validacion != 1)
            {
                scanf("%s",variable);
            }
            c = atoi(variable);
            break;
        case 4:
            discri(&a,&b,&c);
            formula(&a,&b,&c,&x);
            printf("x = %d",x);
            break;
        case 5:
            printf("Gracias por usar");
            break;
        default:
            break;
        }
    }
    
    return 0;
}