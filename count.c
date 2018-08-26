#include"header_cs1_4.h"

void insert(int **num, int n, int *sol){//해당페이지에 대한 숫자를 입력받아 num배열에 갯수를 늘리는 함수
        int e,i,j,k;
        int check=0;

        for(i=0;i<n;i++){
                for(j=sol[i];j>0;j--){
                        check=0;
                        k=j;
                        for(e=100000000;e>=1;){
                                if(k/e != 0){
                                        check =1;
                                }
                                if(check==1){
                                        num[i][k/e]++;
                                }
                                k = k-(k/e)*e;
                                e=e/10;
                        }
                }
        }
}

