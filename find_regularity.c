#include <stdio.h>
#include <stdlib.h>

	int st, a[20], b[20];
	int hp, score; 
	
void present(){
	printf("                                        현재생명 : %d\n                                        현재점수 : %d\n", hp, score);
	if(hp==0){
		printf("당신의 점수는? \n\n\n\n%d점입니다!! ", score);
		return 0;
	}
}	
	
	
void start(){
	printf("시작할때 목숨은 3개이고 틀릴때마다 목숨이 하나씩 까인다.\n목숨이 0이되면 게임오버!\n\n");
	hp = 3;
	score = 0;
	present();
	printf("규칙성 찾기 테스트을 시작합니다!!\n자신이 규칙성을 얼마나 잘 찾아내는지 시험해볼 수 있습니다.\n규칙을 알아내고 적절한 수를 쓰면 다음스테이지로 넘어가고 틀리면 생명이 하나 날아갑니다.!\n도전하시겠습니까?\n1.예\n2.아니요\n");
	scanf("%d", &st);
}
void stage1(){
	printf("stage1\n5개의 수를 입력하시오.\n");
	scanf("%d %d %d %d %d", &a[1], &a[2], &a[3], &a[4], &a[5]);
	printf("%d %d %d %d %d\n16일때 답을 입력하세요.\n", 4*a[1]-10, 4*a[2]-10, 4*a[3]-10, 4*a[4]-10, 4*a[5]-10); 
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
	printf("stage2\n5개의 수를 입력하시오.\n");
	scanf("%d %d %d %d %d", &a[6], &a[7], &a[8], &a[9], &a[10]);
	printf("%d %d %d %d %d\n-11일때 답을 입력하세요.\n", a[6]*a[6]-5, a[7]*a[7]-5, a[8]*a[8]-5, a[9]*a[9]-5, a[10]*a[10]-5); 
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
	printf("stage3\n5개의 수를 입력하시오.\n");
	scanf("%d %d %d %d %d", &a[11], &a[12], &a[13], &a[14], &a[15]);
	printf("%d %d %d %d %d\n19일때 답을 입력하세요.\n", a[11]%9, a[12]%9, a[13]%9, a[14]%9, a[15]%9); 
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
		printf("       예시\n5개의 수를 입력하시오.\n3 5 6 11 14\n11 17 20 35 44\n20일 때 답을 입력하시오. 예시 답:62\n(규칙성:3x+2)\n\n\n");
		stage1();
		stage2();
		stage3();
		return 0;
	}
	if(st==2){printf("..어쩌라는거지..");} 
	return 0;
}






