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
	printf("�̴ϰ���!\n1.�����ӵ�����\n2.�����ӵ�����\n");
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
			printf("�����ӵ�:%lf",sum/j);
		
	}
	if(a==2){
		while(level!=1&&level!=2&&level!=3){
		printf("���̵��� �������ּ���\n1.��(1.5�ʸ��� �����ؾ���)\n2.��(1�ʸ��� �����ؾ���)\n3.��(0.8�ʸ��� �����ؾ���)\n");
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
				printf("�����ӵ�:%lf",sum/j);
				break;
			}		
		}
	}
	 
	return 0;
}


















