#include <stdio.h>
int main(){
	int a,b ;
	printf ("nhap so dien");
	scanf ("%d%d",&a,&b);
	int c= b-a;
	if(c>=200){
		printf("Gia dien la 30.000");
	}else if(150<=c<200){
		printf("Gia dien la 25.000");
	}else if(100<=c<150){
		printf("Gia dien la 20.000");
	}else if(50<=c<100){
		printf("Gia dien la 15.000");
	}else if(c<50){
		printf("Gia dien la 10.000");
	}
		return 0;
}
