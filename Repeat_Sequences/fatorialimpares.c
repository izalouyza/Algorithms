#include<stdio.h>

int main(){
	int cont = 1, conti = 1, f = 1;
	while (cont<=11){
		if (cont%2!=0){
			while (conti<=cont){
				f = f * conti;
				conti++;
			}
			printf("%d! = %d\n", cont, f);
		}
		cont++;
	}
return(0);
}