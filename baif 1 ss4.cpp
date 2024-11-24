#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap so nguyen: ");
	scanf("%d" ,&n);
	if(n > 0){
		printf("nay la so duong: %d\n",n);
	} else if (n < 0){
        printf("nay la so am: %d",n);
	}
	else{
		printf("nay la so khong: %d\n",n);
	}
	return 0;
}
