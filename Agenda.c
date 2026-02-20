#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contatos {
    char nome[100];
    char telefone[20];
    char email[100];
} contatos;


contatos lista_de_Pessoas[1000];


void continuar();
void preencherContatos( contatos *pessoa, int numero_pessoa);
int listarPessoas();
int buscarNome(char nome[]);


int main() {

    
    /*while(1){*/

    char resposta;
    printf("-------Bem vindo a sua Agenda De Contatos!-------\n");
    printf("Preencher contatos de Pessoa (1)\n");
    printf("Listar Pessoas (2)\n");
    printf("buscar nome de pessoas(3)\n");

/*}*/
    


    return 0;
}

void continuar() {

    while (1) {

        char resposta;

        printf("Desejas continuar? (Responda com 's' ou 'n'): ");
        scanf(" %c", &resposta);

        if (resposta == 's') {
            printf("Prosseguindo...\n");
            break;
        }
        else if (resposta == 'n') {
            printf("Encerrando programa...\n");
            exit(0);
        }
        else {
            printf("Por favor digite uma resposta válida...\n");
        }
    }
}

void preencherContatos(contatos *pessoa, int numero_pessoa) {

    printf("Qual seu nome?");
    scanf("%s", (*pessoa).nome);

    printf("Qual seu telefone? ");
    scanf("%s", (*pessoa).telefone);

    printf("Qual seu email? ");
    scanf("%s", (*pessoa).email);

    printf("Contatos Preenchidos!\n");

    lista_de_Pessoas[numero_pessoa] = *pessoa;
}

int listarPessoas() {

    printf("Aqui está todas as pessoas cadastradas:\n");
    for (int i=0; i <1000; i++) {

        
        if (lista_de_Pessoas[i].nome[0] == '\0') {
            break;
        }
        printf("%s", lista_de_Pessoas[i].nome);

    }
}

int buscarNome(char nome[]) {  
    for (int i = 0; i < 1000; i++) {
        if (strcmp(nome, lista_de_Pessoas[i].nome) == 0) {
            return 1;  
        }
    }
    return 0;  
}
