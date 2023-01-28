#include "stdio.h"
#include "string.h"
/*
 *
 *3 4 -5 2 6 1 -2 0
 */
int main(){
    /* ·½·¨Ò»£º
    */
    int poly[2000] = {0};
    // int index = 0;
    int *p = poly;
    do {
        scanf("%d",p++);
        char c = getchar();
        if(c == '\n'){
            break;
        }
    } while (1);
    int len = (p - poly)/2;
    int coef,exp;
    if(len == 1 && poly[1] == 0){
        printf("%d %d",0,0);
    } else{
        for(int j = 0;j<len;j++){
            if(poly[2*j+3] != 0 && poly[2*j+1] != 0){
                coef = poly[2*j] * poly[2*j+1];
                exp = poly[2*j+1]-1;
                printf("%d %d ",coef,exp);
            } else if(poly[2*j+3] == 0 && poly[2*j+1] != 0){
                coef = poly[2*j] * poly[2*j+1];
                exp = poly[2*j+1]-1;
                printf("%d %d",coef,exp);
            }else{
                coef = 0;
                exp = 0;
            }
        }
    }
    return 0;
};


