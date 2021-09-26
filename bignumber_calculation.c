#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {

    int i, j, k, count1, count2, p, temp1, temp2, calculate_way;
    char data1[MAX] = "";
    char data2[MAX] = "";

    int x[MAX/4 + 1] = {};
    int y[MAX/4 + 1] = {};
    int z[MAX/4 + 1] = {};
    int yy[5][MAX/4 + 1]= {};

    printf("input First Number: ");
    scanf("%s", &data1);
    for (i = 0, count1 = 0; data1[i] != '\0'; count1++, i++);

    for (i = 1, j = count1 -1; i <= count1; i++) {
        data1[MAX-i] = data1[j]; 
        data1[j] = '\0'; 
        j--;
    }

    printf("input Second Number: ");
    scanf("%s", &data2);
    for (i = 0, count2 = 0; data2[i] != '\0'; count2++, i++)
        ;
    for (i = 1, j = count2 -1; i <= count2; i++) {
        data2[MAX-i] = data2[j];
        data2[j] = '\0';
        j--;
    }

    printf("\nInput Number\n");
    for (i = count2-count1; i > 0; i--)
        printf(" ");

    for (i = 0; data1[i] == '\0'; i++)
        ;
    for (; i < MAX; i++)
        printf("%c", data1[i]); 
    printf("\n");

    for (i = count1-count2; i > 0; i--)
        printf(" ");

    for (i = 0; data2[i] == '\0'; i++)
        ;
    for (; i < MAX; i++)
        printf("%c", data2[i]);
    printf("\n");

    k = MAX / 4;
    for (i = MAX -1; i >= 0; ) {
        temp1 = temp2 = 0;
        for (j = 1; j <=4; j++) {
            if (i < 0)
                break;
            if (j ==1)
                p = 1; 
            else if (j == 2)
                p = 10;
            else if (j == 3)
                p = 100; 
            else if (j == 4)
                p = 1000; 

            if (data1[i] >= '0' && data1[i] <= '9')
                temp1 = temp1 + (data1[i] - '0')*p; 
            if (data2[i] >= '0' && data2[i] <= '9')
                temp2 = temp2 + (data2[i] - '0')*p;
            i--;
        }
        x[k] = temp1; 
        y[k] = temp2; 
        if (i < 0)
            break;
        k--;
    }
    printf("\n\nchange number base 10000\n");
    for (i = 0; x[i] == 0 && y[i] == 0; i++)
        ;

    for (j = i; j <= MAX/4; j++)
        printf("%04d ", x[j]);
    printf("\n");

    for (j = i; j <= MAX/4; j++)
        printf("%04d ", y[j]);
    printf("\n");

    temp2 = 0;
    printf("1.µ¡¼À\n2.°ö¼À\n");
    scanf("%d", &calculate_way);
	if(calculate_way==1){
    	for (i = MAX/4; i > 0; i--) {
	        temp1 = x[i] + y[i] + temp2; 
    	    temp2 = temp1 / 10000; 
        	temp1 = temp1 % 10000; 
        	z[i] = temp1; 
    	}
	} 
	else if(calculate_way==2){
		for(i=1)
		
	}
    printf("\n The sum result is \n");
    for (i = 0; z[i] == 0; i++)
        ;
    for (; i <= MAX/4; i++)
        printf("%04d ", z[i]);

    printf("\n");
    printf("-----------------\n");

    for (i = 0; z[i] == 0; i++)
        ;
    printf("%4d", z[i]);
    for (i = i +1, j = 1; i <= MAX/4; i++, j++) {
        if (z[i] < 10)
            printf("000");
        else if (z[i] < 100)
            printf("00");
        else if (z[i] < 1000)
            printf("0");
        printf("%d ", z[i]);
    }
    printf("\n\n");


    return 0;
}



