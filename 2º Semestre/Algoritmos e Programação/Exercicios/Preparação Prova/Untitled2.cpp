/* Fa�a um Programa que leia um vetor de 5 n�meros inteiros,
mostre a soma e a multiplica��o por 4 de cada n�mero. */
#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, n_int[5];
    
    for (i=0; i<5; i++) {
    printf("Digite um n�mero: ");
    scanf("%d", &n_int[i]);
}
for (i=0; i<5; i++) {
printf("\n\nA soma por 4 do %d� n�mero: %d", i+1, n_int[i]+4);
printf("\nA multipllica��o por 4 do %d� n�mero: %d", i+1, n_int[i]*4);
}
}
