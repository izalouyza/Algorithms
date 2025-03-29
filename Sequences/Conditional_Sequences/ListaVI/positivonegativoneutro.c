#include<stdio.h>
#include<locale.h>

int main(){                   
	setlocale(LC_ALL, "portuguese");
	int n;       
	printf("Informe um número: ");
	scanf("%d", &n);
	
	if (n>0){
		printf("%d é positivo.", n);
	}
	else{
		if (n<0){
			printf("%d é negativo.", n);
		}
		else{
			printf("%d é neutro.", n);
		}
		}
return(0);
}