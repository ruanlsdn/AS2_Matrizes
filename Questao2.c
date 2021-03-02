#include <time.h>
main () {
	int mat[50][50], i, j, diagonalP;
	srand(time(NULL));
	diagonalP=0;
	for (i=0; i<50; i++) {
		for (j=0; j<50; j++) {
			mat[i][j] = rand()%10;
		}
	}

	for (i=0; i<50; i++) {
		for (j=0; j<50; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	for (i=0; i<50; i++) {
		for (j=0; j<50; j++) {
			if (i==j) {
				diagonalP = diagonalP+mat[i][j];
			}
		}
	}
	printf ("O somatorio da diagonal principal e: %d", diagonalP);
}
