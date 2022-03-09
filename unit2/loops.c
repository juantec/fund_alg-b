#include <stdio.h>
#include "../libraries/utils (1).h"
#include <stdlib.h>

int main (int argc, char** argv){

    for ( int iterator = 1  ; iterator <=10 ; iterator = iterator +  1 ) {
        printf ("ITERATOR: %d\n", iterator);
        sleep(1000);
    }


    int rango = 1;
    int count = 0;
    while ( rango <= 99 ) {
        count = count + rango;
        rango++ ; // rango = rango + 1;
    }
    printf ("suma: %d\n" , count);

    //loops infinitios

    while (true) {
    printf ("Program running...\n");
    sleep(100);
    system("clear");
    };

    for (;;){
        break;
    }    


    bool condicion;
    int i = 1;
    int cuenta = 0;
    // 1 + 2 +  3
    do{
        cuenta += 1; // cuenta = cuenta +1
        printf ("dato: %d\n", cuenta);
        condicion = (1 < 3);
        i++;
    } while (condicion);



    return 0;
}   