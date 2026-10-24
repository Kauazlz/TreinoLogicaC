#import <stdio.h>
#import <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, media;
    printf("PRIMEIRA NOTA: ");
    scanf("%f", &nota1);
    printf("SEGUNDA NOTA: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media do aluno (a) foi %.1f", media);
    printf("\nA sua situação é %s", (media >= 7)? "APROVADO": "REPROVADO");
}
