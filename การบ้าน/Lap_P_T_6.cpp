/*
#include<stdio.h>
int main()
{
	int r1=0,c1=0,r2=0,c2=0;
	
	scanf("%d %d",&r1,&c1);
	int a[r1][c1];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	scanf("%d %d",&r2,&c2);
	int b[r2][c2];
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	if(c1 == r2)
	{
		int sum[c1][r2];
		
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				sum[i][j]=0;
				for(int k=0;k<c1;k++)
				{
					sum[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Not math");
	}
	
}*/
/*
#include<stdio.h>
int main()
{
	int n=0,x=0,count=0,sum=0;
	int a[20];
	do
	{
		scanf("%d",&x);
		a[count++] = x;
		
	}while(x!=0);
	
	for(int i=0;i<count;i++)
	{
		sum += a[i];
	}
	printf("sum = %d",sum);
}*/

/*
#include<stdio.h>
int main()
{
	int n1=0,n2=0,count=0;
	
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&n2);
	int b[n2];
	for(int k=0;k<n2;k++)
	{
		scanf("%d",&b[k]);
	}
	
	int same[n2];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(a[i]==b[j])
			{
				same[j] = a[i];
				count++;
			}
		}
	}
	
	if(count)
	{
		for(int k=0;k<count;k++)
		{
			printf("%d ",same[k]);
		}
	}
	else
	{
		printf("No duplicate");
	}
    
}*/
