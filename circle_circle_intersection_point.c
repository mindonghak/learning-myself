#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double r1, r2, x1, x2, y1, y2;
	double d;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
	d = (double)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if(d>(r1+r2)){
		printf("0");
	}
	else if(d==(r1+r2)){
		printf("1");
	}
	else if(d<(r1+r2)){
		printf("2");
	}
	else{
		printf("-1");
	}
	return 0;
}


