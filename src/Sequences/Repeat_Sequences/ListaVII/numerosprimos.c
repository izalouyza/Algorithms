#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, primo, cont, div;

    printf("V. Inicial: ");
    scanf("%d", &x);
    printf("V. Final: ");
    scanf("%d", &y);

    if ((x >= y) || (x < 0) || (y < 0)){
        printf("Intervalo Inválido.\n");
    }
    else {
        for (cont = x; cont <= y; cont++) {
            if (cont == 1) {  
                continue;
            }
            primo = 1;  

            for (div = 2; div < cont; div++) {
                if (cont % div == 0) {
                    primo = 0;  
                    break; 
                }
            }

            if (primo) {
                printf("%d ", cont);
            }
        }
    }
    
    return 0;
}
