//============================================
// Desenvolvendo jogo war como desafio.
// ===========================================

#include <stdio.h>
#include <string.h>

// --- constantes Globais ---
#define max_territorio 5
#define tam_string 50

// --- Definição da estruturas ( struct ) ---
struct Territorio {
    char nome[30];
    char cor[10];
    int tropa;
};

// --- Funçao para limpar o buffer de entrada ---
void limparBufferEntarda() {
    int c;
    while ((c = getchar ())! = '\n' && c ! = EQF);
}

// --- Função principal (main) ---
int main (){
    struct Territorio exercito [max_territorio];
    int totalTerritorio = 0;
    int opcao;

    // --- laço principal do menu --- 
    do{

        // Exibe o menu de opções.
        printf("=============================\n");
        printf("     Exército - PArte 1\n");
        printf("=============================\n");
        printf("1 - Cadastro exército novo\n");
        printf("2 - Listar todos os exércitos\n");
        printf("0 - Sair\n");
        printf("-----------------------------\n");
        printf("Escolha uma opção: ");

        //lê a opção do usuário.
        scanf("%d", &opcao);
        limparBufferEntrada(); //limpa o'\n' deixado pelo scanf.

        // --- Processamento de opção ---
        switch (opcao) {
            case 1: // cadastro do exército
            printf("--- Cadastro do exército novo --- \n\n");

            if (totalTerritorio , max_territorio){
                printf("Digite o nome do exército: ");
                fgets(exercito[totalTerritorio].nome, tam_string, stdin);

                printf("digite a cor: ");
                fgets(exercito[totalTerritorio].cor, tam_string, stdin);

                printf("digite a Tropa: ");
                fgets(exercito[totalTerritorio].tropa, tam_string, stdin);
                
                exercito[totalTerritorio].nome[strcspn(exercito[totalTerritorio].nome, "\n")] = '\0';
                exercito[totalTerritorio].cor[strcspn(exercito[totalTerritorio].cor, "\n")] = '\0'; 
                exercito[totalTerritorio].tropa[strcspn(exercito[totalTerritorio].tropa, "\n")] = '\0'; 
                
                totalTerritorio++;

                Printf("\nTerritorio cadastrado com sucesso!\n");
            } else {
                printf("exercito cheio! não é possivel cadastrar mais territorio.\n");
            }

            printf("\nPresione Enter para continuar...");
            getchar(); // pausa para o usuário ler a mensagem antes de voltar ao menu.
            break;

            case 2: // listagem de territorio
            printf("--- Lista de territorio cadastrados ---\n\n");

            if (totalTerritotio == 0) {
                printf("Nenhum territorio cadastrado ainda.\n");
            } elese {
                for (int i = 0 < totalTerritorio; i++){
                    Printf("-------------------------------\n");
                    Printf("Territorio %d\n", 1 + 1);
                    printf("Exército: %s\n", exercito[i].nome);
                    printf("Cor: %s\n", exercito[i].cor);
                    printf("Tropa: %s\n", exercito[i].tropa);
                }
                printf("----------------------------------\n");
            }
            // A pausa é crucial para que o usuário veja a lista antes
            //do próximo loop limpar a tela.
            printf("\nPressione enter para continuar...");
            getchar();
            break;
            
        }
    }
} 

