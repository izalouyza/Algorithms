#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, v[5], s = 0;
	for(i=0; i<5; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &v[i]);
	}
	for (i=0; i<5; i++){
			s = s + v[i];
		}
	printf("Soma = %d", s);
return(0);
}