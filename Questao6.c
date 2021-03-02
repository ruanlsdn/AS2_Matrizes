#include <time.h>
main () {
	int mat[100][100], i, j, somatorio, lin, col;
	srand(time(NULL));
	printf ("Informe a quantidade de linhas: ");
	scanf ("%d", &lin);
	do {
		if (lin>100) {
			printf ("Quantidade de linhas deve ser menor ou igual a 100!\n");
			printf ("Informe a quantidade de linhas: ");
			scanf ("%d", &lin);
		}
	} while (lin>100);
	printf ("Informe a quantidade de colunas: ");
	scanf ("%d", &col);
	do {
		if (col>100) {
			printf ("Quantidade de colunas deve ser menor ou igual a 100!\n");
			printf ("Informe a quantidade de colunas: ");
			scanf ("%d", &col);
		}
	} while (col>100);

	for(i=0; i<lin; i++) {
		for (j=0; j<col; j++) {
			printf ("%d linha, %d coluna: ", i+1, j+1);
			scanf ("%d", &mat[i][j]);
		}
	}

	for (i=0; i<lin; i++) {
		for (j=0; j<col; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}
}
