#include <stdio.h>
#include <stdbool.h>

main()
{ 
    int var, h;
    printf("enter number ");
    scanf("%d", &var);
    h=var%2;

    /*Estructura Selectiva Doble if-else*/
    if (h==0)
    {
        printf("Pair");
    }
    else 
    {
        printf("odd")
    }   
    getch();
}    