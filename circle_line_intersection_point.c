#include <stdio.h>
#include <math.h>
#define MIN 0.001	//������������ Ǯ���� �� �� �� ������ ���� �ݿ� �ش��ϴ� �Ѱ�ġ 

void cal(double a,double b, double c, double d, double r){
	double A,B,C,D,R1,R2;
	A = 1+pow(a,2);
	B = 2*(a*b-c-a*d);
	C = pow(c,2)+pow((b-d),2)-pow(r,2);
	D = pow(B,2)-4*A*C;
	if(abs(D)<MIN){
		printf("���� ������ ���� ���մϴ�.\n");
		D=0;
		R1 = (-b+sqrt(D))/(2*a);
		printf("(%.3lf,%.3lf)\n",R1,R1*a+b);
	}
	else if(D>=MIN){
		printf("�� �Լ����� �ΰ��� �������� �ֽ��ϴ�\n");
		R2 = (-B+sqrt(D))/(2*A);
		R1 = (-B-sqrt(D))/(2*A);
		printf("(%.3lf,%.3lf)",R1,R1*a+b);
		printf("(%.3lf,%.3lf)",R2,R2*a+b);
	}
	else{
		printf("�� �Լ��� �������� �����ϴ�.\n");
	}
}
void input(double *a, double *b, double *c, double *d, double *r){
	printf("������ �Լ����� �Է��ϱ� �ٶ��ϴ�.\ny = ax + b \n ���� a = ");
	scanf("%lf",a);
	printf("������ b : ");
	scanf("%lf",b);
	printf("���� �Լ����� �Է��ϱ� �ٶ��ϴ�.\n");
	printf("(x - cx)^2 + (y - cy)^2 = r^2\ncx = ");
	scanf("%lf",c);
	printf("cy = ");
	scanf("%lf",d);
	printf("������ r = ");
	scanf("%lf",r);
} 
int main(){
	double a,b,c,d,r;
	input(&a,&b,&c,&d,&r);
	cal(a,b,c,d,r);
	return 0;
}


