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
                printf("you win!��ȣ!");
                break;
            }
            printf("computer:%d\n",memo);
        }
            }
        else if(level==1||level==3){
        for(i=1;memo%4!=level-1;i++){
            memo++;
            if(memo==31){
                printf("you win!��ȣ!");
                break;
            } printf("computer:%d\n",memo);
        }
    }
        }
    if(level<3){
        reselect:
        printf("���̵� �� ����??1.�� 2.�ƴϿ�\n");
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
        printf("�ѹ���? 1.�� 2.�ƴϿ�\n");
            scanf("%d",&select);
            if(select==1){
                goto no;
            }
            else if(select==2){}
            else{printf("�� ");goto re;}
        }
    }
    return num;
}
int gamestart(){
   int start,level; printf("�ڡ� ����Ų���31���� �ڡ�\n����Ų���31���ӿ� ���Ű��� ȯ���մϴ�.\n�ѹ��� �ϳ��� ���ھ��� �Է��ϼ���.\n������ �����Ͻðڽ��ϱ�?\n1.�� 2.�ƴϿ�\n");
    start:
    scanf("%d",&start);
    if(start!=1){
        printf("�峭�ϴ�..�ٽð��a");
        goto start;
    }
    else if(start==1){
        printf("���Ҿ�!\n���̵��� ���ÿ� 1.�� 2.�� 3.��");
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


