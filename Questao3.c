#include <time.h>
main () {
	int mat[50][20], i, j, maior, posicaoL, posicaoC;
	srand(time(NULL));
	maior = 0;
	for (i=0; i<50; i++) {
		for (j=0; j<20; j++) {
			mat[i][j] = rand()%10;
		}
	}

	for (i=0; i<20; i++) {
		for (j=0; j<20; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	for (i=0; i<50; i++) {
		for (j=0; j<20; j++) {
			if (mat[i][j]>maior) {
				maior=mat[i][j];
				posicaoL=i;
				posicaoC=j;
			}
		}
	}

	printf ("O maior valor da matriz e %d", maior);
	printf (" na linha %d e na coluna %d", posicaoL+1, posicaoC+1);
}
