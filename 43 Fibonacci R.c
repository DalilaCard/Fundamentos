
/* 
 Recursividad 
 */

#include <stdio.h>
#include <stdlib.h>
int Fib (int);
int main(int argc, char** argv) {
int n;
    printf ("Número de Fibonacci que requiere: \n");
    scanf ("%d",&n);
 
    printf("El número de Fibonacci es %ld\n", n,
 Fib(n));    
    return (EXIT_SUCCESS);
}

int Fib (int n){
 if (1 == n || 2 == n) {
 return 1;
 } else {
 return (Fib(n-1) + Fib(n-2));
 } 
}