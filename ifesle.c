#include<stdio.h>
int main(){
	int age;
	
	printf("PLEASE ENTERV YOUR AGE \n");
	scanf("%d",&age);
	
	if(age<18){
		printf("YOU ARE NOT ELIGIBLE \n");
	}
	else if(age==18){
		printf("YOU ARE ELIGIBLE FOR LEARNER LICIENSE \n");

	}
	else{
		printf("YOU ARE ELIGIBLE FOR DRIVING LICIENSE \n ");
	}
}
