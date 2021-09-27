#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	unsigned int i, n, m, tn, k;
	for(i=1;i<100;i++){
		n = pow(2,i)-1;
		for(tn=2;tn<=sqrt(n);tn++){
		m = n%tn;	
		if(m==0){
			k = 0;
			break;
		}
		else if(m!=0){
			k = 1;
				
		}
		}
		if(k==1){
		printf(" n = %u i = %u\n", n, i );
		}

	}
	return 0;
}


