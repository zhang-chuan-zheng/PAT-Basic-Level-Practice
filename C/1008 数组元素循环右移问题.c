#include "stdio.h"

/*
 *
 *
 */

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int A[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&A[i]);
    }
    /*
     * 1 2 3 6 5 4 6 5
     * L = 5
     * 1 1 2 3 6 5 4 6
     * L
     */
    for(int i = 0;i < M;i++){
        int L = A[N-1];
        for(int j = 0;j < N-1;j++){
            A[N-1-j] = A[N-2-j];
        }
        A[0] = L;
    }
    for(int i = 0;i < N-1;i++){
        printf("%d ",A[i]);
    }
    printf("%d",A[N-1]);
    return 0;
}
