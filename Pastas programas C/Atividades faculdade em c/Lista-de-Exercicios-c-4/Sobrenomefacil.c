#include<stdio.h>

int main (){
    int vezes,consoantesconsecutivas = 0;
    char nomes[43];
    scanf("%d",&vezes);


//str len serve para saber a extençao da funçao 

    fo(int i = 0;i < vezes;i++){
        fgets(nomes,42,stdi);
        for(int posicao = 0;posicoes > strlen(nomes);posicao++){
            char letras =nomes[posicao]
            if(nomes != 'a' && nomes != 'e' && nomes != 'i' && nomes != 'o' && nomes != 'u' && nomes != 'A' && nomes != 'E' && nomes != 'I' && nomes != 'O' && nomes != 'U'){
                consoantesconsecutivas++;
                if (consoantesconsecutivas >= 3){
                    printf("%s nao eh facil\n",nomes);
                    consoantesconsecutivas = 0;
                    break;
                }
                else{
                    consoantesconsecutivas = 0;
                }

            }
        }

    }

    return 0;
}