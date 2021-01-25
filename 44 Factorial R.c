

#include <stdio.h>
#include <stdlib.h>

int factorial(int);


int main(int argc, char** argv) {
    int n; 
    printf("El factorial de: ");
    scanf("%d",&n);
    
     printf("Es = %d", factorial(n));
    return (EXIT_SUCCESS);
}

int factorial(int n){
 if (n < 2) return(1);
 else  return (n*factorial(n-1));
}
