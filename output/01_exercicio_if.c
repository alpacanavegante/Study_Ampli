#include <stdio.h>
int main() {
    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >=18){
        printf("\n Voce pode tirar sua carteira de Habilitacaoo, você e maior de 18");
    }
    if (idade <18){
        printf("\ Voce nao pode tirar a habilitacao seu leite com pera, vai la com sua mae pra ela limpar a sua fralda e daqui 30 anos voce volta aqui.");
    }
    return 0;
}