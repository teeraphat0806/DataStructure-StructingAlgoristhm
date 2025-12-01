/*
#include <stdio.h>

int main()
{
    int n = 10;
    int a[n];
    int even = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
       
    }

     printf("%d",even);

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
	int n=10,count=0,sum=0;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i] > 99)
		{
			break;
		}
		if(a[i]%2==0 )
		{
			sum += a[i];
				
		}
		
	}
	printf("%d ",sum);
	
}*/
/*
#include<stdio.h>

int main()
{
	int n=10,count=0,max=-1,index=-1;
	int a[n];
	int under[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i] <= 99 && a[i]%2==0)
		{
		    max = a[i];
		    index = i;
		}
	}
	
	printf("%d \n",max);
	printf("%d",index);
	
}
*/




































