#include "stdio.h"
#include "string.h"
/*
 *
 *3 4 -5 2 6 1 -2 0
 */
int intpower(int i ,int j){
    int b = i;
    if(j == 0){
        i = 1;
    } else{
        for(int k = 1;k<j;k++){
            i *= b;
        }
    }
    return i;
};
int intpower1(int i,int j){
    if(j == 0){
        return 1;
    } else{
        return intpower1(i,j-1)*i;
    }
}
int main(){
    /*
     * 34 -5 2 6 1 -2 0
     * ·½·¨¶þ£º
     */
    int poly[2000] = {0};
    int num[4] = {0};
    int isgigit = 0;
    int sign = 1;
    int index = 0;
    do {
        int c = getchar();
        if(c == ' '){
            if(isgigit == 0){
                continue;
            } else{
                for(int i = 0;i<isgigit;i++){
                    poly[index] += (num[i] - (int)'0') * intpower(10,isgigit-1-i);
                }
                poly[index] = sign * poly[index];
                index += 1;
                sign = 1;
                isgigit = 0;
            }
        } else if(c == '\n'){
            for(int i = 0;i < isgigit;i++){
                poly[index] += (num[i] - (int)'0') * intpower(10,isgigit-1-i);
            }
            poly[index] = sign * poly[index];
            break;
        } else{
            if(c == '-'){
                sign = -1;
            } else{
                num[isgigit] = c;
                isgigit += 1;
            }
        }
    } while (1);
    int len = (index + 1)/2;
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


