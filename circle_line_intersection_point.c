#include <stdio.h>
#include <math.h>
#define MIN 0.001	//이차방정식을 풀었을 때 두 근 사이의 차의 반에 해당하는 한계치 

void cal(double a,double b, double c, double d, double r){
	double A,B,C,D,R1,R2;
	A = 1+pow(a,2);
	B = 2*(a*b-c-a*d);
	C = pow(c,2)+pow((b-d),2)-pow(r,2);
	D = pow(B,2)-4*A*C;
	if(abs(D)<MIN){
		printf("직선 라인은 원에 접합니다.\n");
		D=0;
		R1 = (-b+sqrt(D))/(2*a);
		printf("(%.3lf,%.3lf)\n",R1,R1*a+b);
	}
	else if(D>=MIN){
		printf("두 함수에는 두개의 교차점이 있습니다\n");
		R2 = (-B+sqrt(D))/(2*A);
		R1 = (-B-sqrt(D))/(2*A);
		printf("(%.3lf,%.3lf)",R1,R1*a+b);
		printf("(%.3lf,%.3lf)",R2,R2*a+b);
	}
	else{
		printf("두 함수의 교차점이 없습니다.\n");
	}
}
void input(double *a, double *b, double *c, double *d, double *r){
	printf("직선의 함수식을 입력하기 바랍니다.\ny = ax + b \n 기울기 a = ");
	scanf("%lf",a);
	printf("교차점 b : ");
	scanf("%lf",b);
	printf("원의 함수식을 입력하기 바랍니다.\n");
	printf("(x - cx)^2 + (y - cy)^2 = r^2\ncx = ");
	scanf("%lf",c);
	printf("cy = ");
	scanf("%lf",d);
	printf("반지름 r = ");
	scanf("%lf",r);
} 
int main(){
	double a,b,c,d,r;
	input(&a,&b,&c,&d,&r);
	cal(a,b,c,d,r);
	return 0;
}


