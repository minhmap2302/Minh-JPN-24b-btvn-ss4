#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap so : ");
	scanf("%d" ,&n);
	if(n % 2 == 0){
		printf("nay la so chan: %d\n",n);
	} else if (n % 2 != 0) {
        printf("nay la so le: %d",n);
	}
	else{
		printf("nay la so khong: %d\n",n);
	}
	return 0;
}
