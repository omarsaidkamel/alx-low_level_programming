#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
 * main - Entry point
 *
 * Return : 0 (Success)
 */
int main(void){

	long int n;
	srand(time(0));
	n=rand()-RAND_MAX /2;
	if(n>0) printf("%ld is positive\n",n);
	else if (n==0) printf("0 is zero\n");
	else printf("%ld is negative\n",n);
	return (0);
}
