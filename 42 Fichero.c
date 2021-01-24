

#include <stdio.h>
#include <stdlib.h>

/*
 * Fichero
 */
int main(int argc, char** argv) {
     float i;    
     float a[3];
     int e=1;
     for (int n=0; n<3; n++){
         printf ("Cantidad %d:  ",e++);
         scanf ("%f", &a[n]);
    }
    FILE* fichero;     
    fichero = fopen("datos.txt", "wt");
    fprintf (fichero, "%f\n%f\n%f\n El promedio es: %f\n",
                     a[0], a[1], a[2], i=(a[0]+a[1]+a[2])/3);
    fclose(fichero);     printf("Proceso completado");
 
    return (EXIT_SUCCESS);
}

