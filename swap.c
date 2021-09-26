#include <stdio.h>
#include <time.h>
#define N 1000000000
int main(){
	int temp,i,a=7,b=3;
	clock_t start, end;
	start = clock();
	for(i=0;i<N;i++){
		//printf("%d %d\n",a,b);
		temp = a;
		a = b;
		b = temp;
		//printf("%d %d\n",a,b);
	}
	end = clock();
	printf("[%lf]\n",(double)(end-start)/CLOCKS_PER_SEC);
	start = clock();
	for(i=0;i<N;i++){
		//printf("%d %d\n",a,b);
		a = a+b;
		b = a-b;
		a = a-b;
		//printf("%d %d\n",a,b);
	}
	end = clock();
	printf("[%lf]\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;
}
