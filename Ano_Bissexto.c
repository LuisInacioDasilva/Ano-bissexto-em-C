#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int resto, ano;
    printf("\nDigite o ano: ");
    scanf("%d", &ano);

    if (ano %400 ==0){
        printf("\nO ano � bissexto");
    }
    else if (ano %4 ==0 &&ano %100!=0){
        printf("\nO ano � bissexto");
    }
    else {
        printf("\nO ano n�o � bissexto");
    }
return(0);
}
