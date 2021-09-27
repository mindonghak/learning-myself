#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int scan(int com);
int gamestart();
int regame();
int main(){
    int i,r,memo,level,regame;
    level=gamestart();
    gameset:
    printf("computer:1\ncomputer:2\n");
    memo=2;
    while(memo!=31){
        memo=scan(memo);
        if(memo==31){
            printf("you lose!");
            break;
        }
        srand((unsigned)time(NULL));
        r=rand()%3+2;
        if(level==2){
            for(i=1;i<rand()%4+2;i++){
            memo++;
            if(memo==31){
                printf("you win!야호!");
                break;
            }
            printf("computer:%d\n",memo);
        }
            }
        else if(level==1||level==3){
        for(i=1;memo%4!=level-1;i++){
            memo++;
            if(memo==31){
                printf("you win!야호!");
                break;
            } printf("computer:%d\n",memo);
        }
    }
        }
    if(level<3){
        reselect:
        printf("난이도 상 도전??1.예 2.아니오\n");
        scanf("%d",&regame);
        if(regame==1){
            level=3;
            goto gameset;
        }
        else if(regame==2){
            printf("OK Bye..\n");
        }
        else{
            printf("?\n");
            goto reselect;}
    }
    return 0;
}
int scan(int com){
    int many=0,num,select,n;
    if(com==1){
        num=1;
    }
    else{num=com;}
    no:
    scanf("%d",&n);
    if(n!=num+1){
        printf("nono\n");
        goto no;
    }
    else if(n==31){
        return n;
    }
    else{
        num=n;
        many++;
        if(many<3){
            re:
        printf("한번더? 1.예 2.아니요\n");
            scanf("%d",&select);
            if(select==1){
                goto no;
            }
            else if(select==2){}
            else{printf("뭐 ");goto re;}
        }
    }
    return num;
}
int gamestart(){
   int start,level; printf("★★ 베스킨라빈스31게임 ★★\n베스킨라빈스31게임에 오신것을 환영합니다.\n한번에 하나의 숫자씩만 입력하세요.\n게임을 시작하시겠습니까?\n1.예 2.아니오\n");
    start:
    scanf("%d",&start);
    if(start!=1){
        printf("장난하니..다시골라줭");
        goto start;
    }
    else if(start==1){
        printf("좋았어!\n난이도를 고르시오 1.하 2.중 3.상");
        scanf("%d",&level);
        level:
        switch(level){
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            default:
                printf("what");
                goto level;
        }
    }
}


