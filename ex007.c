#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int numero;
    printf("DIgite um número: ");
    scanf("%d",&numero);
    int dobro = numero * 2;
    float terca = (float)numero / 3;//coerção
    printf("ANALISANDO.... o número %d, seu dobro é %d e sua terça parte é %.2f", numero, dobro, terca);

}
