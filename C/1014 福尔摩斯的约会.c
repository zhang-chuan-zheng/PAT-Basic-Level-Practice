#include "stdio.h"
#include "string.h"
/*
 *
 *
 */
int min(int i,int j){
  if(i<=j){
      return i;
  } else{
      return j;
  }
};
int main(){
    char str0[61] = {0};
    char str1[61] = {0};
    char str2[61] = {0};
    char str3[61] = {0};
    /*
    scanf("%s",str0);
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
     */
    int ind = 1;
    scanf("%[^\n] %[^\n] %[^\n] %[^\n]",str0,str1,str2,str3);
    for(int i = 0;i < min(strlen(str0), strlen(str1));i++){
        if(str0[i] == str1[i] && str0[i] - 'A' >= 0 && str0[i] - 'G' <= 0 && ind == 1){
            ind += 1;
            switch (str0[i]) {
                case 'A':
                    printf("%s ","MON");
                    break;
                case 'B':
                    printf("%s ","TUE");
                    break;
                case 'C':
                    printf("%s ","WED");
                    break;
                case 'D':
                    printf("%s ","THU");
                    break;
                case 'E':
                    printf("%s ","FRI");
                    break;
                case 'F':
                    printf("%s ","SAT");
                    break;
                case 'G':
                    printf("%s ","SUN");
                    break;
            }
        } else if(ind == 2 && str0[i] == str1[i]){
            if(str0[i] - 'N' <= 0 && str0[i] - 'A' >= 0){
                printf("%d:",9 + (str0[i] - 'A') + 1);
            } else if(str0[i] - '9' <= 0 && str0[i] - '0' >= 0){
                printf("0%d:",str0[i] - '0');
            } else{
                continue;
            }
            ind += 1;
        } else{
            continue;
        }
    }
    for(int i = 0;i < min(strlen(str2), strlen(str3));i++){
        if(str2[i] == str3[i] && ((str2[i] - 'A' >= 0 && str2[i] - 'Z' <= 0) | (str2[i] - 'a' >= 0 && str2[i] - 'z' <= 0))){
            if(i < 10){
                printf("0%d",i);
            } else{
                printf("%d",i);
            }
            break;
        } else{
            continue;
        }
    }
    return 0;
};


