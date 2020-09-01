#include <stdio.h>



int main (void){
    /*media ponderada 3 com pesos de 2,3,4,1 respectivamente
    condição de Se esta média for maior ou igual a 7.0, 
    imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
    mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, 
    o programa deve imprimir a mensagem "Aluno em exame.".*/
    
    //declaração variaveis
    float n1,n2,n3,n4,media,notaExame,mediaFinal;

    //inserção de dados e cálculo de media
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    

    //condição para aprovação
    if(media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        }
    else if (media >= 5.0 && media <= 6.9){
        scanf("%f",&notaExame);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",notaExame);
        mediaFinal = (media + notaExame)/2;
        if(mediaFinal >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaFinal);
    }
    else{
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        }
        
    return 0;
}