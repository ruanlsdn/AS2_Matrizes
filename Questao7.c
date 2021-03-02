#include<time.h>
main () {
	int mat[50][20], i, j, somaLin=0, somaCol=0, contLin=0, contCol=0, lin[50], col[20], flag[20], somaTotal=0;
	srand(time(NULL));
	for (i=0; i<50; i++) { //Gera os elementos da matriz
		for (j=0; j<20; j++) {
			mat[i][j]=rand()%10;
			flag[j]=j; //Vetor auxiliar de comparação para o somátorio das colunas
			somaTotal = somaTotal+mat[i][j];
		}
	}

	for (i=0; i<50; i++) {//Apresenta a matriz
		for (j=0; j<20; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	for (i=0; i<50; i++) {
		somaLin = 0;// reseta o somátorio para prosseguir com a proxima linha
		for (j=0; j<20; j++) {
			somaLin=somaLin+mat[i][j];//faz o somátorio de cada linha da matriz
			lin[contLin]=somaLin;//guarda o resultado do somátorio anterior em um vetor

		}
		contLin = contLin + 1;//altera o indice do vetor onde ficará guardado o resultado dos somatórios
	}
	
	do {
		for (i=0; i<50; i++) {
			for (j=0; j<20; j++) {
				if (j==flag[contCol]) { //Condição pra ele somar apenas quando o j possuir valor igual
					somaCol=somaCol+mat[i][j];//faz o somatório de cada coluna da matriz
					col[contCol]=somaCol;//guarda o resultado do somatório anterior em um vetor
				}
			}
		}
		somaCol = 0; //resetar o somatório pra prosseguir pra proxima coluna
		contCol++;//altera o indice do vetor auxiliar "flag" para pular para a proxima coluna
	} while (contCol<20); //Loop para pular as colunas
	
	printf ("\n");
	
	for (i=0; i<50; i++) {
		printf ("O somatorio da %d linha e %d ",i+1, lin[i]);// apresenta o somatório individual de cada linha
		printf ("\n");
	}
	printf ("\n");
	for (i=0; i<20; i++) {
		printf ("O somatorio da %d coluna e %d ",i+1, col[i]);// apresenta o somatório individual de cada coluna
		printf ("\n");
	}
	
	printf ("\n");
	printf ("O somatorio total e %d", somaTotal);// apresenta o somatório total da matriz
}
