#include <stdio.h>
#include <stdlib.h>

void join();
int login();
int i;
int id[101]={},password[101]={};

int main(){
	int n, check;
	regist:
	printf("1.로그인\n2.회원가입\n");
	scanf("%d",&n);
	system("cls");
	if(n==1){
		login:
		check = login();
		if(check==1){
			printf("회원가입부터 하세요!\n");
			goto regist;
		}
		else if(check==3){
			goto login;
		}
	}
	
	if(n==2){
		join();
		system("cls");
		printf("회원가입 완료.\n");
		goto regist;
	}
	
	return 0;
}

void join(){
	int j,n,pw;
	for(j=1;j<=101;j++){
		if(j<=21){
			id[j]=1100+j;
		}
		else if(j<=41){
			id[j]=1200+j-21;
		}
		else if(j<=61){
			id[j]=1300+j-41;
		}
		else if(j<=81){
			id[j]=1400+j-61;
		}
		else if(j<=101){
			id[j]=1500+j-81;
		}
	}
	re:
	printf("ID는 학번입니다. 학번을 입력해주세요\n");
	scanf("%d",&n);
	for(j=1;j<=102;j++){
		if(id[j]==n){
			break;
		}
		if(j==102){
			printf("???\n");
			goto re;
		}
	}
	printf("비밀번호를 정해주세요.\n비밀번호는 숫자로만 이루어지게 해주세요\n");
	scanf("%d",&pw);
	password[j]=pw;
	 
}

int login(){
	int j, Id, pw;
	if(i!=0){
		printf("로그인 오류 %d회. 3회 오류시 꺼집니다.\n",i);
	}
	printf("로그인\n");
	printf("ID:");
	scanf("%d",&Id);
	printf("password:");
	scanf("%d",&pw);
	for(j=1;j<=101;j++){
		if(id[j]==Id){
			break;
		}
	}
	if(password[j]==0){
		system("cls");
		printf("아직 회원가입이 되어있지 않습니다.\n");
		return 1;
	}
	if(password[j]==pw){
		printf("로그인 성공\n");
		return 2;
	}
	else if(password[j]!=pw){
		printf("로그인 오류\n");
		i++;
		if(i==3){
			exit(1);
		}
		return 3;
	}
}




