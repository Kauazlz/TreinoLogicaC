#import <stdio.h>
#import <locale.h>

void main () {
    setlocale(LC_ALL, "portuguese");
    char produto [45];
    float preco;
    float desc ;
    printf("Produto: ");
    gets(produto);
    printf("Preço de %s: R$", produto);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    scanf("%f", &desc);
    float prec_fim = preco - (preco * desc /100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f", produto, preco, desc, prec_fim);

}
