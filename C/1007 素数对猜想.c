#include "stdio.h"

/*
 *
 *
 */

int main(){
    int prime[100000] = {2};
    int N;
    scanf("%d",&N);

    int count_of_p = 1;
    int count_of_2 = 0;
    /*
     * 7
     * 8  2*2*2
     */
    for(int i = 3;i <= N;i++){
        int jud = 1;
        for(int j = 0;j < count_of_p;j++){
            if(i % prime[j] == 0){
                jud = 0;
                break;
            }
        }
        if(jud == 1){
            count_of_p += 1;
            prime[count_of_p-1] = i;
            if(i - prime[count_of_p -2] == 2){
                count_of_2 += 1;
            }
        }
    }
    printf("%d",count_of_2);
}