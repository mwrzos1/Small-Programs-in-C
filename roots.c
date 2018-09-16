#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	
	       double a,b,c,x1, x2 ,x3,formula;
	       printf("Please input three numbers a,b,c \n");
	       scanf("%lf %lf %lf", &a, &b, &c);

	       formula = b*b- 4*a*c;
	       if(a==0){
	                    printf("Can't do it! A has to be other than 0 \n");
	       }
               else  if ((b*b)-(4*a*c) > 0){
	 	            x1 = (-b+sqrt(formula))/ (2*a);
		            x2 = (-b-sqrt(formula))/ (2*a);
		            printf("X1 = %lf and X2 = %lf \n", x1, x2);
	       }
	       else if (formula ==0){
		            x3=((-b)/(2*a));
		            printf("X = %lf \n", x3);
	       }
	       else{
		            printf("Imaginary numbers! \n");
	       } 
	       return 0;
          }
 	
       

