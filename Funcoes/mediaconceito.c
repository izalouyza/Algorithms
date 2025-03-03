//Crie uma função, com retorno, que recebe três notas por parâmetro e calcula a média aritmética de um aluno.
//Crie outra função, sem retorno, que recebe a média aritmética por parâmetro e informa o conceito obtido pelo aluno
#include<stdio.h>
#include<locale.h>

float media(float n1, float n2, float n3);
void conceito(float m);

int main(){
	setlocale(LC_ALL, "portuguese");
	float a, b, c, m;
	printf("Digite três notas:\n");
	scanf("%f %f %f", &a, &b, &c);
	m = media(a, b, c);
	printf("Média aritmética do aluno = %.1f", m);
	conceito(m);
	return (0);
}

float media(float n1, float n2, float n3){
	return((n1+n2+n3)/3);
}

void conceito(float m){
	if (m>=9){
		printf("\nConceito A.");
	}else if(m>=7 && m<9){
		printf("\nConceito B.");
	}else if(m>=6 && m<7){
		printf("\nConceito C.");
	}else if (m>=4 && m<6){
		printf("\nConceito D.");
	}else{
		printf("\nConceito E.");
	}
	
}