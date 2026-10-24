#import <stdio.h>
#import <locale.h>

void main (){
    setlocale(LC_ALL, "portuguese");
    int n, desloca;
    printf("Digite um valor: ");
    scanf("%d",&n);
    printf("Digite o deslocamento: ");
    scanf("%d",&desloca);
    int right = n >> desloca;
    int left = n << desloca;
    printf("\n-------OPERACOES SHIFT--------\n");
    printf("Calculando %d >> %d é igual %d\n", n, desloca, right);
    printf("Calculando %d << %d é igual %d\n", n, desloca, left);

}
