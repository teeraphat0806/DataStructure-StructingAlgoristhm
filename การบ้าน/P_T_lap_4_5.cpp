/*
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
#include<stdbool.h>
using namespace std;

int main()
{
	int n=0,max=0,min=0,sum=0,count=0;
	double sd=0,mean=0,var=0;
	char c;
	
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
	}
	
	for(int i=0;i<n;i++)
    {
    	sum += a[i];
	}
    
    mean = sum/n;
    
    
    for(int i=0;i<n;i++)
    {
        var +=pow(a[i]-mean,2);
	}
	sd = sqrt(var/(n-1));
	
	int center2[2];
	int size=0,center1=0;
	double sumc2=0;
	
	if(n%2!=0)
	{
		if(n%2==1)
		{
			center1= a[n/2];
		}
		else
		{
			center1 = (a[n/2-1]+a[n/2])/2.0;
		}
		 cout << center1 << " ";
	}
	
	if(n%2==0)
	{
		if(n%2==1)
		{
			center2[size++]= a[n/2];
		}
		else
		{
			center2[size++] = a[n/2-1];
			center2[size++] = a[n/2];
		}
	
		for(int i=0;i<size;i++)
		{
			sumc2 += center2[i];
		}
		for(int i=0;i<size;i++)
		{
			cout << center2[i] <<" ";
		}
		cout << sumc2/2;
	}
		
}
*/
/*
#include<iostream>
#include<math.h>
int fx(int a,int b,int c,int m)
{
	if(m > 7)
	{
		int fx1 = a*pow(m,2)+b*m+c;
		return fx1;
	}
	else if(m == 7)
	{
		int fx2 = a*pow(m,2)-b*m+c;
		return fx2;
	}
	else if(m < 7)
	{
		int fx3 = a*pow(m,2)+b*m;
		return fx3;
	}
}

using namespace std;
int main()
{
	int a1=0,b1=0,c1=0,m1=0;
	
	cin >> a1 >> b1 >> c1 >> m1;
	
	int fxto = fx(a1,b1,c1,m1);
	
	cout << fxto;
	
}
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char name[10];
	char c;
	int h=0,w=0,sum1=0,totalg=0,sum2=0,totalm=0;
	cin.get(name,10);
	
	cin >> c;
	if(c=='g')
	{
		cin >> h >> w;
		sum1 = h-110;
		totalg =sum1-w;
		cout << sum1 <<" "<<totalg <<" ";
		if(totalg > sum1)
		{
			cout << "overweight";
		}
		else
		{
			cout << "underweight";
		}
	}
	if(c=='m')
	{
		cin >> h >> w;
		sum2 = h-105;
		totalm =sum2-w;
		cout << sum2 <<" "<<totalg <<" ";
		if(totalm > sum2)
		{
			cout << "overweight";
		}
		else
		{
			cout << "underweight";
		}
	}
}
*/
/*
#include<iostream>

using namespace std;
int main()
{
	int m=0,fi=0,h=0;
	cin >> m >> fi >> h;
	int sum = m+fi+h;
	if(sum >=90 && sum < 100)
	{
		cout << "a";
	}
	if(sum >= 85 && sum < 90)
	{
		cout << "b+";
	}
	if(sum >= 80 && sum < 85)
	{
		cout << "b";
	}
	if(sum >= 70 && sum < 80)
	{
		cout << "c+";
	}
	if(sum >= 60 && sum < 70)
	{
		cout << "c";
	}
	if(sum >= 55 && sum < 60)
	{
		cout << "d+";
	}
	if(sum >= 50 && sum < 55)
	{
		cout << "d";
	}
	if(sum < 50 )
	{
		cout << "T-T";
	}
	
}*/
/*
#include<iostream>
using namespace std;

int main()
{
	int n=0,sum=1;
	cin >> n;
	
	for(int i=n;i>=1;i--)
	{
		cout << i <<" ";
		sum *=i; 
		if(i > 1)
		{
			cout <<"* ";
		}
	}
	cout <<" = " <<sum;
}
*/
/*
#include<iostream>

using namespace std;
int main()
{
	int n=0;
	cin >> n;
	
	if(n%2!=0)
	{
		for(int i=1;i<n;i+=2)
		{
			for(int j=0;j<i;j++)
			{
				cout <<"*";
			}
			cout <<"\n";
		}
		for(int i=0;i<n;i++)
		{
			cout <<"*";	
		}
		cout <<"\n";
			for(int i=2;i<n;i+=2)
		{
			for(int j=i;j<n;j++)
			{
				cout <<"*";
			}
			cout <<"\n";
		}
	}
	else if(n%2==0)
	{
		for(int i=2;i<n;i+=2)
		{
			for(int j=0;j<i;j++)
			{
				cout <<"*";
			}
			cout <<"\n";
		}
		for(int i=0;i<n;i++)
		{
			cout <<"*";
		}
		cout <<"\n";
		for(int i=2;i<n;i+=2)
		{
			for(int j=i;j<n;j++)
			{
				cout <<"*";
			}
			cout <<"\n";
		}
	}
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n=0;
	cin >> n;
	int a[n][2];
	float sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i][0] >> a[i][1];
	}
	
	for(int i=0;i<n;i++)
	{
		sum += (a[i][0]*a[i][1])/60;
	}
	
	cout << fixed << setprecision(2);
	cout << sum;
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char id[8];
    cin.getline(id, 8);
    int len = strlen(id);

    int digit[8];      
    for (int i = 0; i < len; i++) 
	{
        digit[i] = id[i] - '0';
    }

    int num = 0;
    for (int i = 0; i < len; i++) 
	{
        num = num * 10 + digit[i];
    }
   

    if(num%2!=0)
    {
    	cout << "0";
	}
	else if(num%2==0)
	{
		cout <<"1";
	}
    
    int odd = digit[1]%10;
    if(odd%2!=0)
    {
    	cout <<"1";
	}
	else if(odd%2==0)
	{
		cout <<"0";
	}
	
	if (num % 2 != 0) 
	{ 
	    if (num % 3 == 0) 
	    {
	    	cout << "0";
		}
	    else 
		{
			cout << "1";
		}
    } 
	else 
	{            
	    if (num % 4 == 0) 
		{
			cout << "0";
		}
	    else 
		{
			cout << "1";
		}
    }
    
    	if (num % 2 != 0) 
	{ 
	    if (num % 5 == 0) 
	    {
	    	cout << "0";
		}
	    else 
		{
			cout << "1";
		}
    } 
	else 
	{            
	    if (num % 6 == 0) 
		{
			cout << "0";
		}
	    else 
		{
			cout << "1";
		}
    }
    
    if(num>10)
    {
    	cout <<"0";
	}
	else
	{
	    cout <<"1";
	}
	if(num>100)
    {
    	cout <<"0";
	}
	else
	{
	    cout <<"1";
	}
	if(num>1000)
    {
    	cout <<"0";
	}
	else
	{
	    cout <<"1";
	}
	if(num>10000)
    {
    	cout <<"0";
	}
	else
	{
	    cout <<"1";
	}


    return 0;
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n=0;
	cin>> n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << (i+j)%n+1 <<" ";
		}
		cout<<"\n";
	}
}*/

/*
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout <<"y"<<"\n";
		}
		else 
		{
			cout <<"n"<<"\n";
		}
	}
}*/

/*
#include<iostream>

using namespace std;
int main()
{
	int x=0,sum=0,y=0,k=0;
	
	cin >> x>> y >> k;

	for(int i=y;i<=k;i++)
	{
		for(int j=i+1;j<=k;j++)
		{
			if(i+j == x)
			{
				cout << i <<" "<<j<<"\n";
			}
				
			
		}
	}	
}

#include<iostream>

using namespace std;
int main()
{
	int n=0,max=0,min=0,j=0;
	
	cin >> n >> j;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n-i-1;j++)
    	{
    		if(a[j] > a[j+1])
    		{
    			int temp = a[j];
    			a[j] = a[j+1];
    			a[j+1] = temp;
			}
		}
	}
	
	max = a[n-j];
	cout << max;
	
}*/
