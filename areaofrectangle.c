#include<stdio.h>

int main(){
	float width,length,area;
	
	printf("PLEASE ENTER THE VALUE OF WIDTH\n");
	scanf("%f",&width);
	
	printf("PLEASE ENTER THE VALUE OF LENGTH\n");
	scanf("%f",&length);
	
	area = width*length;
	
	printf("AREA OF RECTANGLE IS %.2f",area);
	
	
}
