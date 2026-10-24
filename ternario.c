#import <stdio.h>
#import <locale.h>
#import <string.h>

void main (){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    printf("DIGITE SUA PRIMEIRA NOTA: ");
    scanf("%f", &n1);
    printf("DIGITE SUA SEGUNDA NOTA: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    char sit [10];
    printf("Com base na sua média de %.1f", media);
    strcpy(sit,(media >= 7)? "APROVADO": "REPROVADO");
    printf("\nVocê está %s", sit);
}
