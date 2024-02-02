#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5;
	
	printf("WELCOME! KOTAK BANK  \n ENTER FIRST AMOUNT YOU HAVE DEBITED \n");
	scanf("%4d",&num1);
	
	printf("ENTER SECOND AMOUNT YOU HAVE DEBITED \n");
	scanf("%4d",&num2);
	
	printf("ENTER THIRD AMOUNT YOU HAVE DEBITED \n");
	scanf("%4d",&num3);
	
	printf("ENTER FOURTH AMOUNT YOU HAVE CREDITED \n");
	scanf("%4d",&num4);


	printf("ENTER FIFTH AMOUNT YOU HAVE CREDITED \n");
	scanf("%4d",&num5);
	
 	int result = num1+num2+num3-num4-num5;

	
	printf("YOUR ACCOUNT CURRENT BALANCE IS %d \n",result);
	
	return 0;
	
}
