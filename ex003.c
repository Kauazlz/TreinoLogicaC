#import <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "portuguese");
    // Variaveis
    char nome [30];
    int idade;
    float peso;

    // Entrada de dados
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? (KG): ");
    scanf("%f", &peso);

    printf("\n--------<<< PROCESSANDO >>>--------");
    printf("\nMuito prazer %s. Você tem %d anos e pesa %.2f correto? ", nome, idade, peso);
    printf("FIM.");
}
