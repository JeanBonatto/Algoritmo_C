//include <stdio.h>
//include <stdlib.h>
int main() {
    
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo, opcao;
    
    qtdRuim = 0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo;

    do{
        printf(" O que você achou do atendimento? Digite uma opção \n");
        printf("0 - RUIM\n");
        printf("1 - REGULAR\n");
        printf("2 - BOM\n");
        printf("3 - ÓTIMO\n");
        printf("5 - SAIR\n");
        scanf("%i", &opcao);

        switch(opcao){
            case 0:
                qtdRuim++;
                break;
            case 1:
                qtdRegular++;
                break;
            case 2:
                qtdBom++;
                break;
            case 3:
                qtdOtimo++;
                break;
            case 5:
                printf("Finalizando o programa.\n");
                break;
            default:
                printf("Opção inválida\n");
                break;}
    }while(opcao != 5);
        
        printf("Quantidade de Votos no Ruim: %i\n", qtdRuim);
        printf("Quantidade de Votos no Regular: %i\n", qtdRegular);
        printf("Quantidade de Votos no Bom: %i\n", qtdBom);
        printf("Quantidade de Votos no Otimo: %i\n", qtdOtimo);
        
        return 0;
        
}
