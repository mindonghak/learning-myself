#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define pi 3.141592

double bun[1000000];

int main(){
	register int g,j,foot,theta,k;
	int meet=0, num=0,i, sum=0,d;
	double length, rad, pihat, distance,ave=0,rave=0,rsum=0,avar=0,bun_sum=0,bun_ave,piavar;
	printf("���༱ ������ �Ÿ� d�� �Է����ּ���:");
	scanf("%d",&d);
	printf("�ٴ��� �� �ϳ��� ���̸� �����ּ���. \n");
	scanf("%d",&foot); 
	srand((unsigned)time(NULL));
	printf("�ݺ�Ƚ���� �����ּ���.\n");
	scanf("%d",&i);
	for(j=1;j<=i;j++){
		g=rand()%(d+1);
		sum=sum+g;
		printf("�߽���ġ:%d\n",g);
		if(d/2>g){
			distance=(double)g;
		}
		else if(d/2<g){
			distance=(double)d-g;
		}
		else if(d/2==g){
			distance=(double)g;
		}
		theta=rand()%91;
		rad=(double)theta*(pi/180);
		rsum=rsum+rad;
		length=(double)foot*cos(rad);
		num++;
		if(length>=distance){
			meet++;
		}
		
		if(meet==0){} 
		else if(meet!=0){

			printf("\nmeet:%d num:%d\n",meet,num);
			printf("Ȯ��:%lf\n",(meet/(double)num));
			pihat=(double)(4*foot*num)/(d*meet);
			printf("���̰�:%lf\n",pihat);
		}
		
		
	}
	

	piavar=bun_sum/(k*k);
	printf("\n�л�:%.20lf",piavar);
	
	
	avar=((pi*pi)*(2*pi-2*num*sin(pi/num)))/(2*num*num*sin(pi/num));
	printf("\n�̷����л�:%.20lf\n",avar);
	ave=sum/i;
    rave=rsum/i;
    printf("%lf %lf",ave,rave);
	return 0;
}










