#include<stdio.h>
#include<stlib.h>
#include<time.h>
/*
 * main - Entry point
 *
 * Return : 0 (Success)
 */
int main(void){

	int n;
	srand(time(0));
	n=rand()-RAND_MAX /2;
	if(n>0) printf("%d is positive\n",n);
	else if (n==0) printf("0 is zero\n");
	else printf("%d is negative\n");
	return (0);
}
