#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int i;
	int a[atoi(argv[3])];
	if(argc != 4)
		printf("Error");
	if(argc==4)
	{
		a[0] = atoi(argv[1]);
		a[1] = atoi(argv[2]);
		printf("%d ",a[0]);
		printf("%d ",a[1]);
		for(i=2;i<atoi(argv[3]);i++)
		{	
			a[i] = a[i-1] + a[i-2];
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
		

