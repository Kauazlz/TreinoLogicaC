#import <stdio.h>
#import <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    int suc = numero + 1;
    int ant = numero - 1;
    printf("ANALISANDO... o número %d, seu antecessor é %d e seu sucessor é %d", numero, ant, suc);
}
