#include <stdio.h>
#include <stdlib.h>

void join();
int login();
int i;
int id[101]={},password[101]={};

int main(){
	int n, check;
	regist:
	printf("1.�α���\n2.ȸ������\n");
	scanf("%d",&n);
	system("cls");
	if(n==1){
		login:
		check = login();
		if(check==1){
			printf("ȸ�����Ժ��� �ϼ���!\n");
			goto regist;
		}
		else if(check==3){
			goto login;
		}
	}
	
	if(n==2){
		join();
		system("cls");
		printf("ȸ������ �Ϸ�.\n");
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
	printf("ID�� �й��Դϴ�. �й��� �Է����ּ���\n");
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
	printf("��й�ȣ�� �����ּ���.\n��й�ȣ�� ���ڷθ� �̷������ ���ּ���\n");
	scanf("%d",&pw);
	password[j]=pw;
	 
}

int login(){
	int j, Id, pw;
	if(i!=0){
		printf("�α��� ���� %dȸ. 3ȸ ������ �����ϴ�.\n",i);
	}
	printf("�α���\n");
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
		printf("���� ȸ�������� �Ǿ����� �ʽ��ϴ�.\n");
		return 1;
	}
	if(password[j]==pw){
		printf("�α��� ����\n");
		return 2;
	}
	else if(password[j]!=pw){
		printf("�α��� ����\n");
		i++;
		if(i==3){
			exit(1);
		}
		return 3;
	}
}




