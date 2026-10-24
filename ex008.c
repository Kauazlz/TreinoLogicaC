#import <stdio.h>
#import <locale.h>

void main (){
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    char antes = letra - 1;
    char depois = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.", letra, antes, depois); // dava para usar (letra -1) e (letra+1)
}
