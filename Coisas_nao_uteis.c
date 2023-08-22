#include <stdio.h>
#include <stdlib.h>

int impares_N(int n){
    if(n==1){
        printf("%d  ",n);
    }
    else{
        impares_N(n-1);
        if(n%2!=0){
            printf("%d  ",n);
        }
    }
}

void sorteio(int n){
    srand(time(NULL));
    int aux = rand()%163;
    printf("\nNumero sorteado: %d",aux);
    if(n==aux){
        printf("\nAEEEE vc acertou! parabens ganhou um gato.... mentira nao tem gato mas voce merece\n");
    }else{
        printf("\nnhe nhe nhe tu perdeu, nao ganhou o gato :(\n");
    }
}

void pao_queijo(){
    printf("\nPrimeiramente ce vai precisar de:\n");
    printf("2 copos de leite\n1 copo de agua\n1/3 copo de oleo\n500g de polvilho doce\n3 ovos inteiros\n1 colher de sopa de sal\nQueijo ralado a gosto (muito, sem medo)\n");
    printf("\nAgora vamos preparar:\n");
    printf("1-Ferva o leite com a água e o óleo.\n2-Em uma vasilha misture o polvilho e o sal.\n3-Jogue o liquido fervido e misture com uma colher grande.");
    printf("4-Espere esfriar e despeje o queijo ralado e os ovos.\n5-Misture a massa com a mão amassando bem até virar uma cola caseira dura.\n");
    printf("6-Faça bolinhas do tamanho que preferir.\n7-Asse em forno bem quente até dourar.\n8-Sirva quentinho.\n");
}

int main(){
    int escolha, n, i=1;
    
    while(1==1){
        system("cls");
        printf("\n------------------------------------------------------------\nBEM VINDO\t\t\tContador de usos: %d\n",i);
        i++;
        printf("MENU - coisas nao uteis:\n------------------------------------------------------------\n");
        printf("\n1 - Todos os numeros impares ate N");
        printf("\n2 - Mini loteria");
        printf("\n3 - Uma receitinha facil de fazer e gostosa");
        printf("\n0 - sair (tenho alto util a fazer)\n");
        scanf("%d",&escolha);
        if(escolha==0){
            return 0;
        }
        if(escolha==1){
            system("cls");
            printf("------------------------------------------------------------\nTodos os numeros impares ate N\n------------------------------------------------------------\n");
            printf("Escolha N: ");
            scanf("%d",&n);
            impares_N(n);
            printf("\n");
            system("pause");
        }
        if(escolha==2){
            system("cls");
            printf("------------------------------\nse tu acertar aleatoriamente um numero de 1-163 ganha um gato\n------------------------------\n");
            printf("Escolha seu chute: ");
            scanf("%d",&n);
            sorteio(n);
            printf("\n");
            system("pause");
        }
        if(escolha==3){
            system("cls");
            printf("------------------------------\nReceita de pao de queijo tao bom que parece mentira - atualizada\n------------------------------\n");
            pao_queijo();
            system("pause");
        }
    }
}