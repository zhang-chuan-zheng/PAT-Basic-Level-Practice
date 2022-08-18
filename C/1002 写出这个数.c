#include <stdio.h>
#include "string.h"

void Sw(int a){
    switch (a) {
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        case 0:
            printf("ling");
            break;
    }
}


int main() {
    char digit[100];
    scanf("%s",digit);
    int sum = 0;
    for(int i = 0; i < strlen(digit);i++){
        sum += digit[i] - '0';
    }
    int count_of_Not0 = 0;
    for (int i = 0;i<3;i++){
        int a = sum / 100;
        sum %= 100;
        sum *= 10;
        if(count_of_Not0 == 0 && a == 0){
            continue;
        } else{
            count_of_Not0 += 1;
            Sw(a);
            if(i != 2){
                printf("%c",' ');
            }
        }
    }
    //printf("sum = %d strlen = %d sizeof = %d",sum, strlen(digit), sizeof(digit));
    return 0;
}