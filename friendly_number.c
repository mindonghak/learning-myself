#include <stdio.h>             
#include <stdlib.h>

int main(){
	int a, input, i, b, j,c;
	b = 0;
	c = 0;
	scanf("%d", &input);
	for(a=2;a<=input;a++){
		b = 0;
		c = 0;
		for(i=1;i<a;i++){
			if(a%i==0){
				b = b + i;
			}
		}
		for(j=1;j<b;j++){
			if(b%j==0){
				c = c +j;
			}
		}
		if(c==a){
			printf("wow (%d,%d)\n", b, c);
		}
	}
	return 0;
	
}



