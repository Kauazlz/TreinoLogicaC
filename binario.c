#import <stdio.h>
#import <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);


    printf("----------OPERACOES BITWISE----------\n");
    printf("Calculando %d & %d é igual a %d.\n", n1, n2, (n1 & n2));
    printf("Calculando %d e %d é igual a %d.\n", n1, n2, (n1 | n2));
    printf("Calculando %d e %d é iguall a %d.\n", n1, n2, (n1 ^ n2));

}
