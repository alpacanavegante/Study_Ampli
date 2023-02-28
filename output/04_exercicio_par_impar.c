#include<stdio.h>
int main() {
    int num;
    printf ("\n Digite um numero inteiro: ");
    scanf ("%d", &num);
    if (num % 2 == 0) {
        printf ("\n O número é par");
    } else {
        printf ("\n O número é ímpar");
    }
    return 0;
}