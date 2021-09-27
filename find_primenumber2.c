#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, a, b, x, k;
	k = 0;
	scanf("%d", &x);
	for(a=2; a<=x; a++){
		for(i=2; i<=sqrt(a); i++){
			b = a%i;
			if(b==0){
				break;
			}
		}
		if(b!=0){
		printf("%d  ", a);
		k = k + 1;
		printf("%d번째\n", k+2);
		}
	}
	printf("소수의 갯수는 %d개 입니다.", k+2);
	return 0;
}



//매우 간단해보이지만 꽤나 빠른 속도를 보유하고 있다. 이것보다 빠른 코드를 꼭 짜겠노라.







