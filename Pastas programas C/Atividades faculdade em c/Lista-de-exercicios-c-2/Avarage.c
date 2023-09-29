#include<stdio.h>

int main(){

    float n1,n2,n3,n4,m,e;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    n1= n1*2;
    n2 = n2*3;
    n3 = n3*4;
    n4 = n4*1;
    m = (n1+n2+n3+n4)/10;

    printf("Media: %.1f\n",m);

    if(m >= 7){
        printf("Aluno aprovado.\n");
    }else if(m <5){
        printf("Aluno reprovado.\n");
    }else{
        float nm;
        printf("Aluno em exame.\n");

        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        nm = (e+m)/2;
            if(nm >=5){
                printf("Aluno aprovado.\n");
            }else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", nm);
    
    }   
        
    return 0;
}