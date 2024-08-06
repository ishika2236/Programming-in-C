#include<stdio.h>

int main()
{
	int arr[5]={1,2,4,5,6};
	int* ptr=arr;

	for(int i=0;i<=6;i++)
	{
		printf("%d\n",*(arr+i));
	}	
	return 0;
}
