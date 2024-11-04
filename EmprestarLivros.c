// main.c
#include <windows.h>
#include "metodo.h"

int main() {
	system ("CHCP 65001");
	system ("cls");

    Livro *biblioteca = NULL;
    int numLivros = 0;
    int opcao;

    do {
		printf("Selecione uma ação:\n");
	    printf("1. Adicionar novo livro\n");
	    printf("2. Emprestar livro\n");
	    printf("3. Pesquisar livro\n");
	    printf("4. Listar livros cadastrados\n");
	    printf("5. Devolver livro\n");
	    printf("6. Sair\n");
	    printf("Opção: ");
	    scanf("%d", &opcao);
	    getchar();  // Limpar o buffer do teclado para prosseguir o programa NAO TIRAR SE NAO QUEBRA!

        switch (opcao) {
            case 1:
                adicionarLivroUI(&biblioteca, &numLivros);
                system ("pause");
                system ("cls");
                break;

            case 2:
                emprestarLivroUI(biblioteca, numLivros);
                system ("pause");
                system ("cls");
                break;

            case 3:
                pesquisarLivroUI(biblioteca, numLivros);
                system ("pause");
                system ("cls");                
                break;

            case 4:
                listarLivros(biblioteca, numLivros);
                system ("pause");
                system ("cls");                
                break;
			case 5:
                devolverLivroUI(biblioteca, numLivros);
                system ("pause");
                system ("cls");                 
                break;

            case 6:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 6);

    free(biblioteca); //liberar memoria, é uma função
    return 0;
}
