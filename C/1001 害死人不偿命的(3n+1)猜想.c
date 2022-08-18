#include <stdio.h>

int main()
{
	int num ;
	int step ;
	scanf("%d",&num);
	for(step=0;num>1;++step){
		if(num>1 && num % 2 ==0){
			num /= 2;
		}
		else if(num>1){
			num = num*3+1;
            step--;
		}	
	}
	printf("%d",step);
	return 0;
}