#include <stdio.h>
#include <locale.h>

void limparBuffer() { //Função que limpar o buffer ao final de um cadastro, para que o proximo rode sem buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void main(){
    setlocale(LC_ALL, "portuguese");
    char nome1 [30];
    char nome2 [30];
    char nome3 [30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;


    // Entrada de dados
    printf("Cadastrando a primeira pessoa: ");
    printf("\n--------------------");
    fflush(stdin);
    printf("\nNOME:");
    gets(nome1);

    printf("SEXO [M/F]: ");
    sexo1 = getchar();

    printf("NOTA: ");
    scanf(" %f", &nota1);
    //limparBuffer();

    printf("\n");
    printf("Cadastrando a segunda pessoa: ");
    printf("\n--------------------");
    fflush(stdin);
    printf("\nNOME: ");
    gets(nome2);

    printf("SEXO [M/F]: ");
    sexo2 = getchar();

    printf("NOTA: ");
    scanf(" %f", &nota2);
    //limparBuffer();


    printf("\n");
    printf("Cadastrando a terceira pessoa: ");
    printf("\n--------------------");
    fflush(stdin);
    printf("\nNOME: ");
    gets(nome3);

    printf("SEXO [M/F]: ");
    sexo3 = getchar();

    printf("NOTA: ");
    scanf(" %f", &nota3);
    printf("\n");
   // limparBuffer();



    printf("LISTAGEM DE CADASTROS");
    printf("\n----------------------------------------\n");
    printf("%-20s %-5s %5s\n", "NOME", "SEXO", "NOTA"); // Alinhamento feito pelos números negativos e positivos
    printf("%-20s %-5c %5.1f", nome1, sexo1, nota1);
    printf("\n%-20s %-5c %5.1f", nome2, sexo2, nota2);
    printf("\n%-20s %-5c %5.1f", nome3, sexo3, nota3);
    printf("\n----------------------------------------\n");
}
