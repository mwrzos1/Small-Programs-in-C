#include <stdio.h>

int main(){

	int x, y, gfactor,i;

	printf("Please provide two numbers: \n");
	scanf("%d %d", &x, &y);

	for (i=1; i<=x && i<=y; i++){

		if(x % i == 0 && y % i==0){
		gfactor = i;
	 }
	}
	printf("GCD of %d and %d is = %d \n ", x,y,gfactor);
	return 1;
}
