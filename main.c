#include <stdio.h>

int main( )
{

    int *p = NULL;

    int n = 10;

    //ASSEGNO INDIRIZZO DI N A P
    p = &n;

    printf("il numero n: %d   e  value di p: %d\n", n, *p);
    printf("il indirizzo n: %d   e  indirizzo puntato da p: %d  - indirizzo di p: %d\n", &n, p, &p);

    printf("valore puntato da p: %d\n", *p);
    *p = *p + 1;
    printf("nuovo valore puntato da p: %d\n", *p);

    return 0;
}
