#include<stdio.h>
int main(){
	
	double a,b,c,x;
	printf("Please input three numbers \n");
	scanf("%lf %lf %lf", &a, &b, &c);


	if(a==0 && b!=c){
		printf("No solution \n");
	}
	else if (a==0 && b==c){
		printf("Infinite Solutions \n");
	}
	else if (a!=0){
		 printf("x = %lf \n", (c-b)/a);

	}
	return 1;
}
