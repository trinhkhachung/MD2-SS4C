#include <stdio.h>
int main(){
	int number;
	printf ("nhap vao mot so nguyen");
	scanf ("%d",&number);
	if(number%5==0&&number%3==0){
		printf("so chia het cho 3 va 5");
	}else{
		printf("so khong chia het cho 3 va 5")
	}
	return 0;
}
