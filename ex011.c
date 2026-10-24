#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int valor;
    printf("Digite um número qualquer: ");
    scanf("%d", &valor);
    printf("O número que você digitou é %s",(valor % 2 == 0)? "PAR": "IMPAR");

}
