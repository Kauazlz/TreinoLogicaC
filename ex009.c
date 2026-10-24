#import <stdio.h>
#import <locale.h>
void main () {
    setlocale(LC_ALL, "portuguese");
    char nome [20];
    float nota1;
    float nota2;
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/ 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com a média %.1f", nome, nota1, nota2, media);


}
