#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, mp, af, mf;
	
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	
	mp = (nota1+nota2+nota3)/3;
	
	printf("Média Parcial: %.2f", mp);
	
	if (mp >=7) {
		printf("Aluno aprovado com MÉDIA PARCIAL %.1f", mp);
	}
	else {
		if ((mp>=3.5) && (mp<7)) {
			printf("\nAluno precisa fazer Avaliação Final.");
			printf("\nInforme a nota do aluno na AF: ");
			scanf("%f", &af);
			
			mf = ((6*mp)+(4*af))/10;
			
			printf("Aluno com MÉDIA FINAL %.2f", mf);
		}
		if (mf>=5){
			printf("\nAluno aprovado.");
		}
		else{
			printf("\nAluno reprovado.");
		}
	}
return(0);
}