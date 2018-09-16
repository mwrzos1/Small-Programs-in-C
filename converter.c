#include <stdio.h>
#include <stdlib.h>
int conversion(int);
int main(){

int decimal, binary;

printf("Please provide a positive integer: ");
scanf("%d", &decimal);

binary = conversion(decimal);

printf("Your %d after conversion is: %d \n", decimal, binary);


return 1;

}

int conversion(int decimal){

	int remaining;
	int i=1;
	int b=0;

	while(decimal!=0){
		remaining = decimal%2;
		decimal = decimal/2;
		b+= remaining *i;
		i*=10;
	}
	return b;
}
