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

     
    for(int i=0; i<1000;i++){

    int opcao;
    printf("-------Bem vindo a sua Agenda De Contatos!-------\n");
    printf("Preencher contatos de Pessoa (1)\n");
    printf("Listar Pessoas (2)\n");
    printf("buscar nome de pessoas(3)\n");

    printf("Oque desejas fazer?");
    scanf("%i", &opcao);

    switch(opcao){
        case 1:{
        contatos pessoa;
       preencherContatos(&pessoa, i);
       continuar();
        break;
        }
        case 2:
        listarPessoas();
        continuar();
        break;

        
        case 3:{
    char nome[100];
    printf("Qual nome desejas buscar?\n");
    scanf("%s", nome);

    if (buscarNome(nome)) {
        printf("Nome encontrado!\n");
    } else {
        printf("Nome nao encontrado!\n");
    }

    continuar();
    break;
        }
    }

}
    


    return 0;
}

void continuar() {

    while (1) {

        char resposta;

        printf("Desejas continuar o programa? (Responda com 's' ou 'n'):\n ");
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

    printf("Qual seu nome?\n");
    scanf("%s", (*pessoa).nome);

    printf("Qual seu telefone?\n ");
    scanf("%s", (*pessoa).telefone);

    printf("Qual seu email?\n ");
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
