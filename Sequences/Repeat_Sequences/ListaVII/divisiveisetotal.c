#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont, t = 0;
	for (cont = 10; cont <= 50; cont++){
		if (cont%2==0){
			printf("%d ", i);
			t++;
		}
	}
	printf("Existem %d números divisíveis por 2 nesse intervalo. ", t);
	
return(0);
}