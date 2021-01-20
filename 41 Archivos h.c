#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main() {
    
    int x=2;
    int y=2;
    int f;
    
    f= suma(x,y);
    printf ("%d\n", f);
    
    f= multi(x,y);
    printf ("%d", f);

    return (0);
}
