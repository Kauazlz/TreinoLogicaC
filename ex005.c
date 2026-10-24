#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int n = rand () % 5 + 1; // sorteio de um número entre 1 e 5
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar");
    int palpite;
    printf("\nQual o seu palpite: ");
    scanf("%d", &palpite);
    printf("Eu pensei no número %d e você pensou no %d", n, palpite);

    if (n == palpite){
        printf("\nVocê é o cara");
    } else {
        printf("\nNão foi dessa vez :(");
    }



}
