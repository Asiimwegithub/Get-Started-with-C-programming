#include<stdio.h>
float multiplication(int r)
{
	float k = 3.14 * r *r;
	return (k);
}
int main()
{
	multiplication (4);
	printf("area is %d",multiplication(4));
	return 0;
}

