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

int main(){
    int escolha, n;
    
    while(1==1){
        system("cls");
        printf("\n------------------------------\nBEM VINDO\n");
        printf("MENU - coisas nao uteis:\n------------------------------\n");
        printf("\n1 - Todos os numeros impares ate N");
        printf("\n0 - sair (tenho alto util a fazer)\n");
        scanf("%d",&escolha);
        if(escolha==0){
            return 0;
        }
        if(escolha==1){
            system("cls");
            printf("------------------------------\nTodos os numeros impares ate N\n------------------------------\n");
            printf("Escolha N: ");
            scanf("%d",&n);
            impares_N(n);
            printf("\n");
            system("pause");
        }
    }
}