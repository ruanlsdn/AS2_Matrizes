#include <time.h>
main () {
	srand(time(NULL));
	char mat[15][12], pesquisa, contador=0;
	int i, j, flag;
flag = 0;
	for (i=0; i<15; i++) {
		for (j=0; j<12; j++) {
			mat[i][j] = 65 + rand()%(91-65);
		}
	}

	for (i=0; i<15; i++) {
	for (j=0; j<12; j++) {
		printf ("%c ", mat[i][j]);
	}
	printf ("\n");
	}

	printf ("Digite o caracter que deseja pesquisar: ");
	pesquisa = getche();
	pesquisa = toupper(pesquisa);

	for (i=0; i<15; i++) {
		for (j=0; j<12; j++) {
			if (pesquisa==mat[i][j]){
				flag = 1;
				contador++;
			}
		}
	}

printf ("\n");
if (flag==1){
	printf ("O caracter pesquisado existe na matriz\n");
	printf ("O caracter pesquisado apareceu %d vezes na matriz", contador);
} else {
	printf ("O caracter pesquisado nao existe na matriz");
}
}
