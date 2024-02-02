#include<stdio.h>
int main(){
	float base,height,area;
	
	printf("PLEASE ENTER THE BASE\n");
	scanf("%f",&base);
	
	printf("PLEASE ENTER THE HEIGHT\n");
	scanf("%f",&height);
	
	area = (base*height)/2;
	
	printf("AREA OF TRIAANGLE IS:%.2f",area);
	
}
