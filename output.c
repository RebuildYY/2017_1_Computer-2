#include"header_cs1_4.h"

void output(int **num,int n){//출력하는 함수
        int i,j;
        for(i=0;i<n;i++){
                for(j=0;j<10;j++){
                        printf("%d ", num[i][j]);
                }
                printf("\n");
        }
}
