#include <stdio.h>
#include <stdlib.h>

	int st, a[20], b[20];
	int hp, score; 
	
void present(){
	printf("                                        ������� : %d\n                                        �������� : %d\n", hp, score);
	if(hp==0){
		printf("����� ������? \n\n\n\n%d���Դϴ�!! ", score);
		return 0;
	}
}	
	
	
void start(){
	printf("�����Ҷ� ����� 3���̰� Ʋ�������� ����� �ϳ��� ���δ�.\n����� 0�̵Ǹ� ���ӿ���!\n\n");
	hp = 3;
	score = 0;
	present();
	printf("��Ģ�� ã�� �׽�Ʈ�� �����մϴ�!!\n�ڽ��� ��Ģ���� �󸶳� �� ã�Ƴ����� �����غ� �� �ֽ��ϴ�.\n��Ģ�� �˾Ƴ��� ������ ���� ���� �������������� �Ѿ�� Ʋ���� ������ �ϳ� ���ư��ϴ�.!\n�����Ͻðڽ��ϱ�?\n1.��\n2.�ƴϿ�\n");
	scanf("%d", &st);
}
void stage1(){
	printf("stage1\n5���� ���� �Է��Ͻÿ�.\n");
	scanf("%d %d %d %d %d", &a[1], &a[2], &a[3], &a[4], &a[5]);
	printf("%d %d %d %d %d\n16�϶� ���� �Է��ϼ���.\n", 4*a[1]-10, 4*a[2]-10, 4*a[3]-10, 4*a[4]-10, 4*a[5]-10); 
	scanf("%d", &b[1]);
	if(b[1]==54){
		printf("success!\n");
		score = score + 50;
		present();
	} 
	else{
		printf("Oh~~ You are wrong\n");
		hp = hp - 1;
		present();
	}
}
void stage2(){
	printf("stage2\n5���� ���� �Է��Ͻÿ�.\n");
	scanf("%d %d %d %d %d", &a[6], &a[7], &a[8], &a[9], &a[10]);
	printf("%d %d %d %d %d\n-11�϶� ���� �Է��ϼ���.\n", a[6]*a[6]-5, a[7]*a[7]-5, a[8]*a[8]-5, a[9]*a[9]-5, a[10]*a[10]-5); 
	scanf("%d", &b[2]);
	if(b[2]==116){
		printf("success!\n");
		score = score + 100;
		present();
	} 
	else{
		printf("Oh~~ You are wrong\n");
		hp = hp - 1;
		present();
	}
}

void stage3(){
	printf("stage3\n5���� ���� �Է��Ͻÿ�.\n");
	scanf("%d %d %d %d %d", &a[11], &a[12], &a[13], &a[14], &a[15]);
	printf("%d %d %d %d %d\n19�϶� ���� �Է��ϼ���.\n", a[11]%9, a[12]%9, a[13]%9, a[14]%9, a[15]%9); 
	scanf("%d", &b[3]);
	if(b[3]==1){
		printf("success!\n");
		score = score + 100;
		present();
	} 
	else{
		printf("Oh~~ You are wrong\n");
		hp = hp - 1;
		present();
	}
}


int main() {

	start();
	if(st==1){
		printf("       ����\n5���� ���� �Է��Ͻÿ�.\n3 5 6 11 14\n11 17 20 35 44\n20�� �� ���� �Է��Ͻÿ�. ���� ��:62\n(��Ģ��:3x+2)\n\n\n");
		stage1();
		stage2();
		stage3();
		return 0;
	}
	if(st==2){printf("..��¼��°���..");} 
	return 0;
}






