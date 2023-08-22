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

int main(){
    int escolha, n, i=1;
    
    while(1==1){
        system("cls");
        printf("\n------------------------------------------------------------\nBEM VINDO\t\t\tContador de usos: %d\n",i);
        i++;
        printf("MENU - coisas nao uteis:\n------------------------------------------------------------\n");
        printf("\n1 - Todos os numeros impares ate N");
        printf("\n2 - Mini loteria");
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
        
    }
}