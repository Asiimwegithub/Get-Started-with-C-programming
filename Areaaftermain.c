#include<stdio.h>
int calc (float pi, int r);
int main()
{
	calc(3.14,6*6);
	printf("Area = %d", calc(3.14,6*6));
	return 0;

}
int calc (float pi,int r)
{
	int area =pi*r;
	return(area);
}
