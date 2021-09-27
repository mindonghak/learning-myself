#include <stdio.h>

int check(int n){
	if(n<2){
		printf("\nIt is an invalid number !\n");
		return 1;
	}
	return 0;
}
void f(int n, int i, int a[10000]){
	int j;
	for(j=2;j<=n;j++){
		if(n%j==0){
			a[j]++;
			n/=j;
			j--;
		}
	}
}
void print(int n,int a[10000]){
	int i,start=0;;
	for(i=2;i<n;i++){
		if(a[i]!=0){
			if(start!=0){
				printf("*");
			}
			if(a[i]==1){
				printf("%d",i);
				start=1;
			}
			else{
				printf("%d^%d",i,a[i]);
				start=1;
			}
		}
	}
	if(start==0){
		printf("%d\n",n);
		printf("It is a prime number !\n");
	}
	else{
		printf("\nIt is a compositive number !\n");
	}
}
void clean(int n, int a[10000]){
	int i;
	for(i=0;i<=n;i++){
		a[i]=0;
	}
}
int main(){
	int n, a[10000]={};
	while(1){
		printf("\nInput an positive integer : ");
		scanf("%d",&n);
		if(n==0){
			printf("End of program\n");
			break;
		}
		printf("%d = ",n);
		if(!check(n)){
			f(n,2,a);
			print(n,a);
			clean(n,a);
		}
	}
	return 0;
}



