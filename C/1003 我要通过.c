#include "stdio.h"
#include "string.h"
#include "math.h"

int isYes(int first_len,int mid_len,int behind_len){
    int r;
    if(first_len == behind_len && mid_len == 1){
        r = 1;
    } else if(mid_len-1 > 0 && behind_len-first_len >= 0){
    	r =  isYes(first_len,mid_len-1,behind_len-first_len);
    	/*
        if(isYes(first_len,mid_len-1,behind_len-first_len) == 1){
            r = 1;
        } else{
            r = 0;
        }
        */
    } else{
        r = 0;
    }
    return r;
}

int isAllPAT(char str[],int len_str){
    int judge = 1;
    for(int i = 0;i<len_str;i++){
        if(str[i] != 'P' && str[i] != 'T' && str[i] != 'A'){
            judge = 0;
            break;
        }
    }
    return judge;
}

int main(){
    int n;
    scanf("%d",&n);
    int result[n];
    for (int i = 0;i<n;i++){
        char str[101];
        scanf("%s",str);
        int r = 1;
        if(isAllPAT(str, strlen(str)) == 0){
            r = 0;
        } else{
            int num_first = 0 , num_mid = 0,num_behind = 0;
            int split = 0;
            for(int j = 0;j< strlen(str);j++){
                if(split == 0){
                    if(str[j] == 'A'){
                        num_first += 1;
                    } else if(str[j] == 'P'){
                        split = 1;
                    } else{
                        r = 0;
                        break;
                    }
                }else if(split == 1){
                    if(str[j] == 'A'){
                        num_mid += 1;
                    } else if(str[j] == 'T'){
                        split = 2;
                    } else{
                        r = 0;
                        break;
                    }
                } else{
                    if(str[j] == 'A'){
                        num_behind += 1;
                    } else{
                        r = 0;
                        break;
                    }
                }

            }

            if(split == 2 && r == 1){
                r = isYes(num_first,num_mid,num_behind);
            } else{
                r = 0;
            }
        }
        result[i] = r;
    }
    for(int i = 0;i < n;i++){
        if(result[i] == 0){
            printf("NO");
            if(i != n-1){
                printf("\n");
            }
        } else if(result[i] == 1) {
            printf("YES");
            if (i != n - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}
