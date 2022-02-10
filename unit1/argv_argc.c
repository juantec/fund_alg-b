#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    printf("program executed: %s, number of inputs elements: %d", argv[0], (argc-1));
    printf ("Hola %s %s %s %s, bienvenido!\n", argv[1], argv[1], argv[1], argv[1]);
    return 0;
}   