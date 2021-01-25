
#include <stdio.h>
#include <stdlib.h>
 
void hanoi(int n,int origen, int aux, int fin);
 
int main(){
 
	char origen='A';
	char aux='B';
	char fin='C';
	int n;
 
	printf("\nNúmero de discos: \n");
	scanf("%d",&n);
	
	printf("\nMovimientos que debe hacer: \n");
	hanoi(n,origen,aux,fin);
        return (0);
}
 
void hanoi(int n,int origen, int aux, int fin){
 
	if(n==1){
		printf("%c a %c",origen,fin);
	}
	else{
		hanoi(n-1,origen,fin,aux);
		printf("\n%c a %c\n",origen,fin);
		hanoi(n-1,aux,origen,fin);
	}
}

