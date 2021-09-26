#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
#include <string.h>
#include <time.h>

void good(){
	getch(); 
	system("cls");
}
int main(){
	int a,start,stop,score=0,n,i,j,level=0;
	double reacttime[1000]={},sum=0,ave;
	
	srand((unsigned)time(NULL));
	printf("미니게임!\n1.반응속도측정\n2.반응속도게임\n");
	scanf("%d", &a);
	if(a==1){
		for(i=0;i<10;i++){
			a=rand()%9+1;
			printf("%d",a);
			start=clock();
			wow:
			n=getch();
			if(n==(a+48)){
				stop=clock();
				reacttime[i]=(double)(stop-start)/CLOCKS_PER_SEC;
				score++;
				printf("\n%lf\n", reacttime[i]);
			}
			else{
				goto wow;
			}
			
		}
		for(j=0;j<10;j++){
			sum=sum+reacttime[j];
		}
			printf("반응속도:%lf",sum/j);
		
	}
	if(a==2){
		while(level!=1&&level!=2&&level!=3){
		printf("난이도를 설정해주세요\n1.하(1.5초만에 반응해야함)\n2.중(1초만에 반응해야함)\n3.상(0.8초만에 반응해야함)\n");
		scanf("%d",&level);
		}
		for(i=0;;i++){
			sum=0;
			a=rand()%9+1;
			system("cls"); 
			printf("%d",a);
			start=clock();
			n=getch();
			if(n==(a+48)){
				stop=clock();
				reacttime[i]=(double)(stop-start)/CLOCKS_PER_SEC;
				if(level==1){
					if(reacttime[i]>1.5){
						printf("\nscore:%d\n",score);
						break;
					}
				}
				else if(level==2){
					if(reacttime[i]>1.0){
						printf("\nscore:%d\n",score);
						break;
					}
				}
				else if(level==3){
					if(reacttime[i]>0.8){
						printf("\nscore:%d\n",score);
						break;
					}
				}
				score++;
			}
			else{
				printf("\nscore:%d\n", score);
				for(j=0;j<i;j++){
					sum=sum+reacttime[j];
				}
				printf("반응속도:%lf",sum/j);
				break;
			}		
		}
	}
	 
	return 0;
}


















