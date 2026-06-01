#include<stdio.h>
int main()
{
	int arr[5];
	int sum=0;

	for(int i=0;i<5;i++)
	{
		printf("array element :%d\n",i+1);
		scanf("%d",&arr[i]);
	}

	printf("array element are:\n");

	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
		printf("Array Element =%d\n",arr[i]);
	}

	printf("Total sum of array =%d\n",sum);

	return 0;
}
