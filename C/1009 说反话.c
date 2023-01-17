#include "stdio.h"
#include "string.h"
/*
 *
 *
 */

int main(){
    char A[81] = {'0'};
    scanf("%[^\n]",A);
    int l = strlen(A);
    int last_space_index = l;
    for(int i = l-1 ;i >= 0;i--){
        if(A[i] == ' '){
            for(int j = i+1 ;j < last_space_index;j++){
                printf("%c",A[j]);
            }
            printf("%c",A[i]);
            last_space_index = i;
        }
        if(i == 0){
            for(int j  = 0 ;j<last_space_index;j++){
                printf("%c",A[j]);
            }
        }
    }
    return 0;
};

