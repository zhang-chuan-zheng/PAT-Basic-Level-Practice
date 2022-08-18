#include <stdio.h>
#include "string.h"

int main() {
    int n;
    scanf("%d",&n);
    char Max_name[20] = {0},min_name[20] = {0};
    char Max_ID[20] = {0},min_ID[20] = {0};
    int Max_grade = 0,min_grade = 0;
    getchar();

    for(int i = 0;i<n;i++){
        char name[15]={0};
        char ID[15]={0};
        int grade = 0;
        scanf("%s %s %d",name,ID,&grade);
        getchar();
        if(i == 0){
            Max_grade = grade;
            memcpy(Max_name, name, sizeof(name));
            memcpy(Max_ID, ID, sizeof(ID));
            min_grade = grade;
            memcpy(min_name, name, sizeof(name));
            memcpy(min_ID, ID, sizeof(ID));
        }else {
            if (grade > Max_grade) {
                Max_grade = grade;
                memcpy(Max_name, name, sizeof(name));
                memcpy(Max_ID, ID, sizeof(ID));
            } else if (grade <= min_grade) {
                min_grade = grade;
                memcpy(min_name, name, sizeof(name));
                memcpy(min_ID, ID, sizeof(ID));
            }
        }
    }
    //printf("%c",min_name[0]);
    printf("%s %s\n",Max_name,Max_ID);
    printf("%s %s\n",min_name,min_ID);
    return 0;
}

