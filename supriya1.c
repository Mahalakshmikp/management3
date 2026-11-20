#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i;
	p=(int*)calloc(5,sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	printf("values after calloc\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",p[i]);
	}
	printf("\n");
	free(p);
	return 0;
}

