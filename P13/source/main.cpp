#include<stdio.h>
#include <stdlib.h>
void cubeByReference(int &nptr);
int main()
{
	int n = 5;
	printf("The original value of number is %d",n);
	cubeByReference(n);
	printf("\nThe new value of number is %d\n",n);
	system("pause");
	return 0;
}
void cubeByReference(int &nptr)
{
	nptr = nptr*nptr*nptr;
}