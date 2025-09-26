# include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
   
    int npt1,pop1,npt2,pop2,atrib1,atrib2, r1=0, r2=0, rf;
    char est[30]="PE", cod1[15], cid1[50], cod2[15], cid2[50];
    float pib1, area1, pib2, area2, denpop1, denpop2, reper1, reper2, poder1, poder2;
   
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("CADASTRANDO AS CARTAS \n");
    printf("\nCARTA 1 \n");
        //printf("Qual o estado: ");
        //scanf("%s", &est1,"\n");
        //fgets(est1,sizeof(est1), stdin);
        //est1[strcspn(est1, "\n")] = '\0';  // Remove a quebra de linha que o fgets() adiciona
            printf("Informe uma cidade de PE: ");
            //scanf("%s", &cid1, "\n");
            fgets(cid1,sizeof(cid1), stdin);
            cid1[strcspn(cid1, "\n")] = '\0';
                 printf("Informe o codigo: ");
                 scanf("%s", &cod1, "\n");
                    printf("Informe a populacao: ");
                    scanf("%d", &pop1, "\n");
                        printf("Informe a area: ");
                        scanf("%f", &area1, "\n");
                            printf("Informe o PIB: ");
                            scanf("%f", &pib1, "\n");
                                printf("Informe quantos pontos turisticos: ");
                                scanf("%d", &npt1, "\n");
    denpop1 = pop1 / area1;
    reper1 = pib1 / pop1;
    poder1 = pop1 + area1 + pib1 + npt1 + reper1 + (1 / denpop1);

    printf("\nCARTA 2 \n");
        //printf("Qual o outro estado: ");
        //scanf("%s", &est2);
        //fgets(est2,sizeof(est2), stdin);
        //est2[strcspn(est2, "\n")] = '\0';
            printf("Informe outra cidade de PE: ");
            scanf("%s", &cid2, "\n");
            //fgets(cid2,sizeof(cid2), stdin);
            //cid2[strcspn(cid2, "\n")] = '\0';
                 printf("Informe o codigo: ");
                 scanf("%s", &cod2, "\n");
                    printf("Informe a populacao: ");
                    scanf("%d", &pop2, "\n");
                        printf("Informe a area: ");
                        scanf("%f", &area2, "\n");
                            printf("Informe o PIB: ");
                            scanf("%f", &pib2, "\n");
                                printf("Informe quantos pontos turisticos: ");
                                scanf("%d", &npt2, "\n"); 
    denpop2 = pop2 / area2;
    reper2 = pib2 / pop2;
    poder2 = pop2 + area2 + pib2 + npt2 + reper2 + (1 / denpop2);
    printf("\n -------------------------------------------------------------------------------- \n");
                                //SAIDA
    printf("\nCONFIRA OS DADOS INFORMADOS\n");
    printf("\nCARTA 1 \n");
        //caracteres especias=gets(est1);
        printf("Estado: %s \n", est);
            //gets(cid1);
            printf("Cidade: %s \n", cid1);
                printf("Codigo: %s \n", cod1);
                  //concatena strings=strcat(pop1, " habitantes");
                    printf("Populacao de: %d ", pop1);
                    printf("habitantes \n");
                        printf("Area de: %f quilometros quadrados \n", area1);
                             printf("Pib: %f \n", pib1);
                                printf("Quantidade de Pontos Turisticos: %d \n", npt1);
                                    printf("Densidade Populacional: %f \n", denpop1);
                                    printf("PIB Per capita: %f \n", reper1);
                                    printf("Super Poder: %f \n", poder1);


    printf("\nCARTA 2 \n");
        //caracteres especias=gets(est1);
        printf("Estado: %s \n", est);
            //gets(cid1);
            printf("Cidade: %s \n", cid2);
                printf("Codigo: %s \n", cod2);
                  //concatena strings=strcat(pop1, " habitantes");
                    printf("Populacao de: %d ", pop2);
                    printf("habitantes \n");
                        printf("Area de: %f quilometros quadrados \n", area2);
                            printf("Pib: %f \n", pib2);
                                printf("Quantidade de Pontos Turisticos: %d \n", npt2);
                                    printf("Densidade Populacional: %f \n", denpop2);
                                    printf("PIB Per capita: %f \n", reper2);
                                    printf("Super Poder: %f \n \n", poder2);
    printf("\n -------------------------------------------------------------------------------- \n");
    printf("###### AGORA VAMOS JOGAR ###### \n");
    printf("***** Escolha dois atributos ***** \n \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. Pib \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade populacional \n");
    printf("6. Pib percapta \n");
    printf("7. Poder \n");
    printf("\n ** Digite o primeiro atributo: ");
    scanf("%d", &atrib1, "\n");
    
    if(atrib1==1 || atrib1==2 || atrib1==3 || atrib1==4 || atrib1==5 || atrib1==6 || atrib1==7){
    printf("\n ** Digite o segundo atributo: ");
    scanf("%d", &atrib2, "\n");
    if(atrib2==1 || atrib2==2 || atrib2==3 || atrib2==4 || atrib2==5 || atrib2==6 || atrib2==7){

        switch (atrib1) {
        case 1:
           if (pop1==pop2){
        printf("\n ##### Populacao empatada de %s e %s sao iguais: %d \n", cid1, cid2, pop1);
            } else if (pop1>pop2){
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a POPULACAO de: %d\n", cid1, est,pop1);
        r1=1;
            } else {
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a POPULACAO de: %d\n", cid2, est, pop2);
        r2=1;
            } 
        break;
        
        case 2:
           if (area1==area2){
        printf("\n ##### Area empatada de %s e %s sao iguais: %f \n", cid1, cid2, area1);
            } else if (area1>area2){
        printf("\n ##### A cidade de %s-%s venceu esse atributo com AREA de: %f \n", cid1, est, area1);
        r1=1;
            } else {
        printf("\n ##### A cidade de %s-%s venceu esse atributo com AREA de: %f \n", cid2, est, area2);
        r2=1;
            } 
            break;

        case 3:
           if (pib1==pib2){
                printf("\n ##### Pib empatado de %s e %s sao iguais: %f \n", cid1, cid2, pib1);
            } else if (pib1>pib2){
        printf("\n ##### A cidade de %s-%s venceu esse atributo com o PIB de: %f \n", cid1, est, pib1);
        r1=1;
            } else {
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a PIB de: %f \n", cid2, est, pib2);
        r2=1;
            } 
            break;
        
        case 4:
           if (npt1==npt2){
        printf("\n ##### O numero de pontos turisticos empatado de %s e %s sao iguais: %d \n", cid1, est, npt1);
            } else if (npt1>npt2){
        r1=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com o Nº de PONTOS TURISTICOS de: %d \n", cid1, est,npt1);
            } else {
        r2=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com o Nº de PONTOS TURISTICOS de: %d \n", cid2, est, npt2);
            } 
        break;
        
        case 5:
           if (denpop1==denpop2){
        printf("\n ##### A densidade populacional da cidade de %s e %s sao iguais: %f  \n", cid1, est, denpop1);
            } else if (denpop1<denpop2){
        r1=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a DENSIDADE POPULACIONAL de: %f \n", cid1, est, denpop1);
            } else {
        r2=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a DENSIDADE POPULACIONAL de: %f \n \n \n", cid2, est, denpop2);
            } 
            break;

        case 6:
           if (reper1==reper2){
        printf("\n ##### A renda percapta da cidade de %s e %s sao iguais: %f  \n", cid1, est, reper1);
            } else if (reper1>reper2){
        r1=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com a RENDA PERCAPTA de: %f \n", cid1, est, reper1);
            } else {
        r2=1;
        printf("\n ##### A cidade de %s-%s e a venceu esse atributo com a RENDA PERCAPTA de: %f \n", cid2, est, reper2);
            } 
            break;

        case 7:
           if (poder1==poder2){
        printf("\n ##### O poder da cidade de %s e %s sao iguais: %f \n", cid1, est, poder1);
            } else if (area1>area2){
        r1=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com o PODER de: %f \n", cid1, est, poder1);
            } else {
        r2=1;
        printf("\n ##### A cidade de %s-%s venceu esse atributo com o PODER de: %f \n", cid2, est, poder2);
            } 
            break;
        }

        switch (atrib2) {
        case 1:
           if (pop1==pop2){
        printf("##### Populacao empatada de %s e %s sao iguais: %d \n", cid1, cid2, pop1);
            } else if (pop1>pop2){
        printf("##### A cidade de %s-%s venceu esse atributo com a POPULACAO de: %d\n", cid1, est,pop1);
        r1+=1;
            } else {
        printf("##### A cidade de %s-%s venceu esse atributo com a POPULACAO de: %d\n", cid2, est, pop2);
        r2+=1;
            } 
        break;
        
        case 2:
           if (area1==area2){
        printf("##### Area empatada de %s e %s sao iguais: %f \n", cid1, cid2, area1);
            } else if (area1>area2){
        printf("##### A cidade de %s-%s venceu esse atributo com AREA de: %f \n", cid1, est, area1);
        r1+=1;
            } else {
        printf("##### A cidade de %s-%s venceu esse atributo com AREA de: %f \n", cid2, est, area2);
        r2+=1;
            } 
            break;

        case 3:
           if (pib1==pib2){
                printf("##### Pib empatado de %s e %s sao iguais: %f \n", cid1, cid2, pib1);
            } else if (pib1>pib2){
        printf("##### A cidade de %s-%s venceu esse atributo com o PIB de: %f \n", cid1, est, pib1);
        r1+=1;
            } else {
        printf("##### A cidade de %s-%s venceu esse atributo com a PIB de: %f \n", cid2, est, pib2);
        r2+=1;
            } 
            break;
        
        case 4:
           if (npt1==npt2){
        printf("##### O numero de pontos turisticos empatado de %s e %s sao iguais: %d \n", cid1, est, npt1);
            } else if (npt1>npt2){
        r1+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com o Nº de PONTOS TURISTICOS de: %d \n", cid1, est,npt1);
            } else {
        r2+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com o Nº de PONTOS TURISTICOS de: %d \n", cid2, est, npt2);
            } 
        break;
        
        case 5:
           if (denpop1==denpop2){
        printf("##### A densidade populacional da cidade de %s e %s sao iguais: %f  \n", cid1, est, denpop1);
            } else if (denpop1<denpop2){
        r1+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com a DENSIDADE POPULACIONAL de: %f \n", cid1, est, denpop1);
            } else {
        r2+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com a DENSIDADE POPULACIONAL de: %f \n \n \n", cid2, est, denpop2);
            } 
            break;

        case 6:
           if (reper1==reper2){
        printf("##### A renda percapta da cidade de %s e %s sao iguais: %f  \n", cid1, est, reper1);
            } else if (reper1>reper2){
        r1+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com a RENDA PERCAPTA de: %f \n", cid1, est, reper1);
            } else {
        r2+=1;
        printf("##### A cidade de %s-%s e a venceu esse atributo com a RENDA PERCAPTA de: %f \n", cid2, est, reper2);
            } 
            break;

        case 7:
           if (poder1==poder2){
        printf("##### O poder da cidade de %s e %s sao iguais: %f \n", cid1, est, poder1);
            } else if (area1>area2){
        r1+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com o PODER de: %f \n", cid1, est, poder1);
            } else {
        r2+=1;
        printf("##### A cidade de %s-%s venceu esse atributo com o PODER de: %f \n", cid2, est, poder2);
            } 
            break;
        }
    printf("\n \n ######## RESULTADO FINAL ######## \n \n");
    
    if (r1==r2){ // esta dentro do segundo if(atrib2), sao tres if aninhados
        printf("##### RESULTADO EMPATADO ##### ****** SEM VENCEDOR ******\n \n");
    } else if (r1>r2){
        printf("##### A grande vencedora e a cidade de *** %s-%s *** #####----- PARABENS-----\n \n", cid1, est);
    } else {
        printf("##### A grande vencedora e a cidade de *** %s-%s *** #####----- PARABENS-----\n \n", cid2, est);
    }

    } else {
    printf("\n ##### OPCAO INVALIDA ##### ******** ##### SAINDO DO SISTEMA ##### \n \n");
    }
    } else {
    printf("\n ##### OPCAO INVALIDA ##### ******** ##### SAINDO DO SISTEMA #####\n \n");
    }
        
   return 0;
}