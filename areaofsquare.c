#include<stdio.h>

int main(){
	float side,area;
	
	printf("PLEASE ENTER THE SIDE LENGTH OF THE SQUARE: \n");
    scanf("%f", &side);
    
    area = side * side;
    
    printf("AREA OF SQUARE IS %.2f",area);
}
