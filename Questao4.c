#include <time.h>
main () {
	int mat[10][5], i, j, contP, contI;
	srand(time(NULL));
	contP = 0;
	contI = 0;
	for (i=0; i<10; i++) {
		for (j=0; j<5; j++) {
			mat[i][j] = rand()%10;
		}
	}

	for (i=0; i<10; i++) {
		for (j=0; j<5; j++) {
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	for (i=0; i<10; i++) {
		for (j=0; j<5; j++) {
			if (mat[i][j] % 2 == 0) {
				contP=contP+1;
			} else {
				contI=contI+1;
			}
		}
	}

	printf ("A quantidade de elementos pares e %d, e a quantidade de elementos impares e %d", contP, contI);
}
