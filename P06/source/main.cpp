#include <stdio.h>
#include <stdlib.h>
int cubeByValue(int n);
int main()
{
	int n = 5;
	printf("The original value of number is %d",n);
	n = cubeByValue(n);
	printf("\nThe new value of number is %d\n",n);
	system("pause");
	return 0;
}
int cubeByValue(int n)
{
	return n*n*n;
}

