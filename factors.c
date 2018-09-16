#include <stdio.h>
#include <stdlib.h>
int main(){

	int n, i;
	printf("Please provide integer: ");
	scanf("%d", &n);

    printf("Number %d factors are :\n ", n);
    n =  abs(-n);

    for (int i =2; i<=n/2; i++){

	if (n%i== 0){
	   printf("%d \n",i);
	   printf("%d \n", i*(-1));
	}
   }
   return 1;
}
