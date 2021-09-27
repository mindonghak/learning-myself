#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,i,k,d,j;
	int rem[100000]={};
	rem[1]=2;
	scanf("%d",&a);
	for(i=3;i<=a;i++){
		d=0;
		for(k=1;rem[k]!=0;k++){
			d++;
		}
		for(k=1;rem[k]!=0;k++){
			if(i%rem[k]==0){
				break;
			}
			if(k==d&&i%rem[d]!=0){
				rem[k+1]=i;
			}
		}
		
	}
	for(j=1;rem[j]!=0;j++){
		printf("%d\n",rem[j]);
	}
	printf("소수의 개수는 : %d",j-1);

	return 0;
}



//소수들로만 나누기 때문에 초반에는 빠른 속도를 보여준다. 소수로 나누었을 때 나눠지면 바로 그 수는 제외시키고, 소수들로 안나누어지면 그수를 소수배열에 추가하는 방식으로 코드를 짜 보았는데 수가 커질수록 소수의 개수가 늘어남에 따라 소수가 아닌 수들을 제외하는 속도는 빨라졌을지 몰라도 소수들을 찾는 속도는 앞에 소수가 늘어나는 만큼 늘어나서 매우 느렸다. 








