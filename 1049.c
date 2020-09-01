#include <stdio.h>
#include <string.h>
int main()
{
    //string de tipo de esqueleto
    char esqueleto1[] = "vertebrado", esqueleto2[] = "invertebrado";

    //string de tipo de familia
    char familia1[] = "ave", familia2[] = "mamifero", familia3[] = "inseto", familia4[] = "anelideo";

    //string de alimentação
    char alimentacao1[] = "carnivoro", alimentacao2[] = "onivoro", alimentacao3[] = "herbivoro", alimentacao4[] = "hematofago";
    
    //string de suporte
    char esqueleto[50], familia[50], alimentacao[50];
   
    //puxar dados do esqueleto para entrar na tabela if
    scanf("%s",&esqueleto);
   
    //sistema dos vertebrados
    if (strcmp(esqueleto,esqueleto1) == 0){
        //familia 1
         scanf("%s",&familia);
        if(strcmp(familia,familia1) == 0){
            scanf("%s",&alimentacao);

            //alimentação dos animais
            if(strcmp(alimentacao,alimentacao1) == 0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }
     
        //familia 2
        if(strcmp(familia,familia2) == 0){
            scanf("%s",&alimentacao);

            //alimentação dos animais
            if(strcmp (alimentacao, alimentacao2) == 0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }
  
    //sistema dos invertebrados
    if(strcmp(esqueleto, esqueleto2) == 0){
        scanf("%s",&familia);
     
        //familia 3
        if (strcmp(familia,familia3) == 0){
            scanf("%s",&alimentacao);

            //alimentação dos animais
            if(strcmp(alimentacao, alimentacao4) == 0){
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        }
      
        //familia 4
        if(strcmp(familia,familia4) == 0){
            scanf("%s",&alimentacao);

            //alimentação dos animais
            if(strcmp(alimentacao, alimentacao4)){
                printf("minhoca\n");
            }else{
                printf("sanguessuga\n");
            }
        }
    }
    return 0;
}