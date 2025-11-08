#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	float a[5], b[5];
	for (i=0; i<5; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%f", &a[i]);
	}
	for (i=0; i<5; i++){
		if (i==0){
			b[i] = a[i];
		}else if(i%2==0){
			b[i] = a[i] * 5;
		}else{
			b[i] = a[i] + 5;
		}	
	}
	printf("VETOR A\n");
	for(i=0; i<5; i++){
		printf("%.1f ", a[i]);
	}
	printf("VETOR B\n");
	for(i=0; i<5; i++){
		printf("%.1f ", b[i]);
	}
return(0);
}