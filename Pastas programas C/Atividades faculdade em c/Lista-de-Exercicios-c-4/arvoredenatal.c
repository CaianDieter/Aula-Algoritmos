#include<stdio.h>

int main(){
    int tamanhoarvore;
    scanf("%d",&tamanhoarvore);
    int meioArvore = tamanhoarvore/2;
    int numlinhas = meioArvore;
    int numAsteriscos = 1;
    int numespacos = meioArvore;
   for(int linhaArvore = 0;linhaArvore <numlinhas;linhaArvore++ ){

        for(int espacosImpressos = 0;espacosImpressos < numespacos;espacosImpressos++){
            printf(" ");
        } 
        for(int asteriscosimpressos = 0; asteriscosimpressos < numAsteriscos;asteriscosimpressos++){
        printf("*");            
        }
        printf("\n");
        numAsteriscos = numAsteriscos+2;
        numespacos--;
   }







for(int i = 0;i < meioArvore;i++){
    printf(" ");
}
printf("*\n");

for(int i =0; i < meioArvore - 1;i++){
    printf(" ");

}
 printf("***\n");
    return 0;
}