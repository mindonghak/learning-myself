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
		printf("%d��°\n", k+2);
		}
	}
	printf("�Ҽ��� ������ %d�� �Դϴ�.", k+2);
	return 0;
}



//�ſ� �����غ������� �ϳ� ���� �ӵ��� �����ϰ� �ִ�. �̰ͺ��� ���� �ڵ带 �� ¥�ڳ��.







