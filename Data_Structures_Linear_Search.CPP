#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[100],n,i,e,flag=0;

	printf("\n Enter the number of elements in an array:");
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		printf("Enter the value:");
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be found:\n");
	scanf("%d",&e);

	for(i=0;i<=(n-1);i++)
	{
		if(a[i]==e)
		{
			flag=1;
			break;
		}
	}

	if(flag==0)
	{
		printf("Element not found.");
	}
	else
	{
		printf("%d found at location %d.",e,i);
	}

	getch();
}