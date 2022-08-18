#include "stdio.h"
#include "string.h"
/*
 *
 *
 */
int iscovered(int num1,int num2){
    int res = 0;
    for(int i = 0;num2>1;i++){
        if(num2 % 2 == 0 ){
            num2 /= 2;
            if(num1 == num2){
                res = 1;
            }
        } else{
            num2 = num2 *3 + 1;
        }
    }
    return res;
}

int main(){
    int K;
    scanf("%d",&K);
    int numx[K];
    for(int i = 0;i<K;){
        scanf("%d",&numx[i++]);
    }

    int result[101] = {0};
    /*
     * 3 5 6 7 8 11
     *
     * 7
     */
    int count = 0;
    for(int i = 0;i<K;i++){
        int jud = 0;
        for(int j = 0;j<K;j++){
            if(iscovered(numx[i],numx[j])){
                jud = 1;
                break;
            }
        }
        if(jud == 0){
            count += 1;
            result[numx[i]] = numx[i];
        }

    }
    int c = 0;
    for(int i = 100;i > 1;i--){
        if(c < count-1 && result[i] != 0){
            c++;
            printf("%d ",result[i]);
        } else if(c == count-1 && result[i] != 0){
            printf("%d",result[i]);
        }

    }
    return 0;
}