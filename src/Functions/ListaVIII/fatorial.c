//Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero por parâmetro e retorna o fatorial de tal número. A função main deve receber e exibir o resultado.
#include<stdio.h>
#include<locale.h>

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int f, n;
	printf("Digite o número que quer fatorar: ");
	scanf("%d", &n);
	f = fatorial(n);
	if (n>=0){
		printf("%d! = %d", n, f);
	}
	return (0);
}

int fatorial(int n){
	if (n<0){
		printf("Valor inválido.");
		return -1;
	}else{
	int resultado = 1;
		for (int i = 1; i<=n; i++){
			resultado = resultado * i;
		}
		return (resultado);
		}
	}