#include <time.h>
main () {
	int mat[20][20], i, j;
	srand(time(NULL));
	for (i=0; i<20; i++) {
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
}
