#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main(int argc, char** argv) {

   char in[7]= {"Dalila"};
   char nom[5]={"Omar"};
   char op[6]={"Sofia"};
   char cop[7]= {"Dalila"};

   /*Imprimir en pantalla el arreglo*/
   for( int i=0; i<strlen(in); i++){
   printf("%c",in[i]);
   }
  /*Concatena el
contenido de nom al final de op */
    strcat(op, nom);
    printf("\n%s",op);
   /*Compara las cadenas y devuelve un 0 si son iguales*/
    int x=strcmp (in,cop);
    
    if (x==0){
    printf ("\nLas dos cadenas son iguales");
    }
         
    return (EXIT_SUCCESS);
}

