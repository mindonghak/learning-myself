#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int baseball(int a, int b, int c); //함수 선언 
int main(){
    int a,b,c,game=0;
    printf("야구게임을 시작합니다!\n");
    re:
    srand((unsigned)time(NULL));   //컴퓨터가 생각한 수가 랜덤적으로 하기위해 시간적 난수 사용 
    a=rand()%9+1;                //100의자리는 1~9 
    b=rand()%10;				//10의자리는 0~9 
    c=rand()%10;				//1의자리도0~9 로 하도록 한다. 
    if(a==b||b==c||a==c){		//컴퓨터가 생각한 수가 같은수가 있으면 난수를 생성하는 초기위치로 다시돌아가서 새난수를 만든다. 
    	goto re;
    }
    while(game!=1){				//Srike가 3개이면 게임을 끝낸다. 
   		game = baseball(a,b,c);
	}
	printf("You Win!!");
    return 0;
}

int baseball(int a, int b, int c){		//야구게임의 핵심 함수 
    int num,mya,myb,myc,B=0,S=0,out=0;
    number:
    scanf("%d",&num);					//내가 생각하는 수를 받는다. 
    if(num<100||num>999){				//내가 입력한 수가 3자리수가 아닐경우에 다시 입력하도록 한다. 
    	printf("3자리수 입력하시길....제발\n");
    	goto number;
    } 
    mya=(num-num%100)/100;				//3자리수를 백의자리,십의자리,일의자리를 나누어서 컴퓨터가 입력받는다. 
    myc=num%10;
    myb=(num-100*mya-myc)/10;
    if(mya==myb||mya==myc||myb==myc){
    	goto number;
    }
    if(mya==a){							//여기서 부터는 자리수와 숫자가 같으면 Strike개수를 늘리고 
        S++;							//그냥 숫자만 같으면 Ball개수를 늘린다. 
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
    if(B==0&&S==0){						//모든 숫자가 같지 않으면 out 출력한다. 
    	out++;
    	printf("out\n");
    }
    else if(B!=0||S!=0){				//Ball과Strike개수 출력 
    	printf("%dBALL\n%dSTRIKE\n",B,S);
    }
    if(S==3){							//S가 3개면 이김. 
    	return 1;
    }
    else{								//S가 3개가 아니라는 뜻. 
    	return 2;
    }
    
}







