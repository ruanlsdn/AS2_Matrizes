#include <time.h>
main () {
	int mat[3][10], i, j, somatorio;
	srand(time(NULL));
	somatorio=0;
	for (i=0; i<3; i++) {
		for (j=0; j<10; j++) {
			mat[i][j] = rand()%10;
		}
	}

	for (i=0; i<3; i++) {
		for (j=0; j<10; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	for (i=0; i<3; i++) {
		for (j=0; j<10; j++) {
			if (i==j) {
				somatorio=somatorio+mat[i][j];
			}
		}
	}

	for (j=0; j<10; j++) {
		printf ("%d ", mat[2][j]);
	}

	printf ("\nO somatorio dos indices iguais e %d", somatorio);
}
