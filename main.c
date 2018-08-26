#include"header_cs1_4.h"

int main(){
        int **num;
        int *sol;
        int n;
        int i,j;
        scanf("%d",&n);
        sol = (int*)malloc(n*sizeof(int));
        num = (int**)calloc(n,sizeof(int));
        for(i=0;i<10;i++){
                num[i] = (int*)calloc(10,sizeof(int));
        }
        for(i=0;i<n;i++){
                for(j=0;j<10;j++){
                        num[i][j]=0;
                }
        }

        for(i=0;i<n;i++){
                scanf("%d", &sol[i]);
        }
        insert(num,n,sol);
        output(num,n);
}

