#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int baseball(int a, int b, int c); //�Լ� ���� 
int main(){
    int a,b,c,game=0;
    printf("�߱������� �����մϴ�!\n");
    re:
    srand((unsigned)time(NULL));   //��ǻ�Ͱ� ������ ���� ���������� �ϱ����� �ð��� ���� ��� 
    a=rand()%9+1;                //100���ڸ��� 1~9 
    b=rand()%10;				//10���ڸ��� 0~9 
    c=rand()%10;				//1���ڸ���0~9 �� �ϵ��� �Ѵ�. 
    if(a==b||b==c||a==c){		//��ǻ�Ͱ� ������ ���� �������� ������ ������ �����ϴ� �ʱ���ġ�� �ٽõ��ư��� �������� �����. 
    	goto re;
    }
    while(game!=1){				//Srike�� 3���̸� ������ ������. 
   		game = baseball(a,b,c);
	}
	printf("You Win!!");
    return 0;
}

int baseball(int a, int b, int c){		//�߱������� �ٽ� �Լ� 
    int num,mya,myb,myc,B=0,S=0,out=0;
    number:
    scanf("%d",&num);					//���� �����ϴ� ���� �޴´�. 
    if(num<100||num>999){				//���� �Է��� ���� 3�ڸ����� �ƴҰ�쿡 �ٽ� �Է��ϵ��� �Ѵ�. 
    	printf("3�ڸ��� �Է��Ͻñ�....����\n");
    	goto number;
    } 
    mya=(num-num%100)/100;				//3�ڸ����� �����ڸ�,�����ڸ�,�����ڸ��� ����� ��ǻ�Ͱ� �Է¹޴´�. 
    myc=num%10;
    myb=(num-100*mya-myc)/10;
    if(mya==myb||mya==myc||myb==myc){
    	goto number;
    }
    if(mya==a){							//���⼭ ���ʹ� �ڸ����� ���ڰ� ������ Strike������ �ø��� 
        S++;							//�׳� ���ڸ� ������ Ball������ �ø���. 
    }
    else if(mya==b||mya==c){
    	B++;
    }
    if(myb==b){
    	S++;
    }
    else if(myb==a||myb==c){
    	B++;
    }
    if(myc==c){
    	S++;
    }
    else if(myc==a||myc==b){
    	B++;
    }
    if(B==0&&S==0){						//��� ���ڰ� ���� ������ out ����Ѵ�. 
    	out++;
    	printf("out\n");
    }
    else if(B!=0||S!=0){				//Ball��Strike���� ��� 
    	printf("%dBALL\n%dSTRIKE\n",B,S);
    }
    if(S==3){							//S�� 3���� �̱�. 
    	return 1;
    }
    else{								//S�� 3���� �ƴ϶�� ��. 
    	return 2;
    }
    
}







