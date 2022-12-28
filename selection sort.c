#include<stdio.h>
void main()
{
	int a[10];
	int n,i,pass,j,temp,m;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the Array Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("selection sort Results\n");
	for(pass=0;pass<n;pass++)
	{
		for(j=pass+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
		printf("Pass %d Results\t",pass);
		for(m=0;m<n;m++)
		{
			printf("%d\t",a[m]);
		}
		printf("\n");
	}
	printf("\nfinal results\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
