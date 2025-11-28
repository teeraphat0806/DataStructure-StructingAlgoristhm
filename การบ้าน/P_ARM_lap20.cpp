#include<iostream>
using namespace std;

int main()
{
	int n1=0,n2=0,count=0,p=0;
	
	
	
	cin >> n1 >> n2;
	
	int id[n1][n2];
	int sum[n1];
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cin >> id[i][j];
		}
	}
	    
	for(int i=0;i<n1;i++)
	{	
	    sum[i]=0;
		for(int j=0;j<n2;j++)
		{
			sum[i] += id[i][j];    
		}
	}
	
	int getid[n1];
	for(int i=0;i<n1;i++)
	{
		getid[i] = i;
	}
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n1-i-1;j++)
		{
			if(sum[j] > sum[j+1])
			{
				int temp1 = sum[j];
				sum[j] = sum[j+1];
				sum[j+1] = temp1;
				
				int temp2 = getid[j];
				getid[j] = getid[j+1];
				getid[j+1] = temp2;
			
			}
		}
	}
	
	cout << getid[n1-1]+1 <<" "<<sum[n1-1];
	
}
