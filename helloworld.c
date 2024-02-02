#include<stdio.h>

int main(){
	char a[10];
	char b[20];
	double c;
	printf("ENTER YOUR NAME \n");
	scanf("%s",&a);
	printf("ENTER YOUR ADDRESS \n");
	scanf("%s",&b);
	printf("ENTER YOUR MOBILE NUMBER \n");
	scanf("%lf",&c);
	
	
	printf("YOUR NAME IS %s \n" ,a);
	printf("YOUR ADDDRSS IS %s \n",b);
	printf("YOUR NOBILE NUMBER IS %.0lf \n",c);
	}
