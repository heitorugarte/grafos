#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *arquivo;
	char str[20];
	char* nomearquivo = "c:\\teste1.txt";
	
	arquivo = fopen(nomearquivo, "r");
	if (arquivo == NULL){
		printf("Nao foi possivel abrir o arquivo %s", nomearquivo);	
		return 1;
	}
	
	// ler a primeira linha colocando em um int
	fgets(str, 20, arquivo);
	int qntVertices = atoi(str);
	printf("Quantidade de vertices: %d\n", qntVertices);
	
	//Ler adjacencias
	while (fgets(str, 20, arquivo) != NULL){
		char* split = strtok(str, " ");
		char* pares[2];
		int i = 0;
		while (split != NULL){
			pares[i++] = split;
			split = strtok(NULL, " ");
	 	}
		int origem = atoi(pares[0]);
		int destino = atoi(pares[1]);
		printf("Adjacencia entre: %d e %d\n", origem, destino);
		// add adjacencia (origem, destino)
	}
	fclose(arquivo);
	
	// bfs()
	// exibir saida no formato do trabalho
	return 0;
}
