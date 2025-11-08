#include<stdio.h>

int main(){
	int cont = 1, s = 0;
	while (cont<=500){
		cont++;
		if (cont%2==0){
			s = s+cont;
		}
	}
	printf("\nSoma = %d", s);
return(0);
}