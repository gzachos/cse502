/*
 * part05-dmm.pdf p.12
 */

#include <stdio.h>
#include <stdlib.h>

#define M 5

int main(void) {
	int n, i, j;
	float mo = 0, *measurements[M];   /* Pinakas me M deiktres,
	                               	     idio me float *(measurements[M]) */
	
	printf("Enter the number of measurements per experiment: ");
	scanf("%d", &n);
	
	for (i = 0; i < M; i++) {  /* Gia kathe peirama, mnimi gia n metriseis */
		/* measurements[i] : deixnei se swro n arithmwn */
		measurements[i] = (float *) malloc(n * sizeof(float));
		if (measurements[i] == NULL)
			return 1;
	}

	for (i = 0; i < M; i++) {
		printf("Experiment #%d\n", i);
		for (j = 0; j < n; j++) {
			printf("\tMeasurement #%d: ", j);
			/* Xeirismos san na einai didiastatos pinakas */
			scanf("%f", &measurements[i][j]);
		}
	}
	
	printf("\nResults: \n");
	for (i = 0; i < M; i++) {
		for (j = 0; j < n; j++)
			mo += measurements[i][j];
		mo /= n;
		printf("Experiment #%d, mo = %.2f\n", i, mo);
	}

	for (i = 0; i < M; i++)
		free(measurements[i]);   /* Apeleftherwsi mnimis */
	
	return 0;
}