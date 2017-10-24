/*
 * part03-pointers.pdf p.27
 */

#include <stdio.h>

int main(void) {
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = NULL, *q = NULL;
	int n = 3;
	
	p = &src[0];
	q = &src[2];
	printf("%d %d\n", *p, p[0]);
	printf("%d %d\n", *q, q[0]);
	
	p[n] += 11;
	printf("%d\n", p[n]);
	
	q[n] += 11;
	printf("%d\n", q[n]);
	
	return 0;
}