#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b, c, d, e;
	float m, n, l;
	char x;
	scanf("%d%c^2+%d%c+%d=0", &a, &x, &b, &x, &c);
	d = a*2;
	e = b;
	printf("미분 : %d%c+%d=0\n", d, x, e);
	m = (float)a/3;
	n = (float)b/2;
	printf("적분 : %.3f%c^3+%.3f%c^2+%d%c+C\=0\n", m, x, n, x, c, x); 
	return 0;
}


