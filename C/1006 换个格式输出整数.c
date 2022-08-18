#include "stdio.h"
#include "string.h"
/*
 *
 *
 */

int main(){
    int n;
    scanf("%d",&n);
    char c[3]={'B','S'};
    for(int i = 0;i<2;i++){
        int BS = n /100;
        for(int j = 0;j<BS;j++){
            printf("%c",c[i]);
        }
        n %= 100;
        n *= 10;
    }
    int ind = n/100;
    for(int i = 1;i<=ind;i++){
        printf("%d",i);
    }
    return 0;
}