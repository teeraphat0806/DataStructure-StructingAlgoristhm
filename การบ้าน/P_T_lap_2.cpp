/*
#include<iostream>
using namespace std;

int main()
{
	int n1=0,n2=0,sum=0;
	double vat=0,sumvat=0;
	cin >> n1;
	cin >> n2;
	sum = n1*n2;
	
	vat = sum*0.07;
	sumvat = vat+sum;
	cout << sumvat/2;

}
*/
/*
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
	double c=0,s=0,x=0;
	cin >> x;
	double d = (c*M_PI)/180.0;
	
	c = cos(d);
	s = sin(d);
	
	cout << fixed << setprecision(4);
	cout << c <<"\n";
	cout << s;
}*/
/*
#include<iostream>

using namespace std;
int main()
{
	int n=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;
	cin >> n;
	n1 = n/1000;
	n%=1000;
	
	n2 = n/500;
	n%=500;
	
	n3 = n/100;
	n%=100;
	
	n4 = n/50;
	n%=50;
	
	n5 = n/20;
	n%=20;
	
	n6 = n/10;
	n%=10;
	
	n7 = n/1;
	n%=1;
	cout << n1 <<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<" "<<n6<<" "<<n7;
}*/
/*
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double a=0,b=0,c=0;
	
	cin >> a >> b;
	
	c = pow(a,2)+pow(b,2);
	c = sqrt(c);
	cout << fixed << setprecision(4);
	cout << c;
}*/
/*
#include<iostream>

using namespace std;
int main()
{
	int a=0,b=0;
	cin >> a >> b;
	
	while(b!=0)
	{
		int temp = b;
		b = a%b;
		a = temp;
	}
	cout << a;
}*/
/*
#include<iostream>

using namespace std;
int main()
{
	int x=0,y=0,aws=0;
	cin >> x >> y;
	
	if(x==y)
	{
		aws = 1;
	}
	else if(y < x)
	{
		aws = 2;
	}
	else
	{
		if(y%x==0)
		{
		   aws = y/x;	
		}
		else
		{
			aws = y/x+1;
		}
	}
	cout << aws;
}
*/
/*
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <sstream> 
using namespace std;
int main()
{
	int a1=0,b1=0,c1=0,n1=0,n2=0,n3=0;
	string a,b,c;
	
	cin >> a1 >> b1 >> c1;
	cin >> a >> b >> c;
	
	stringstream ss1(a);
	ss1 >> n1;
	n1 = a1;
	
	stringstream ss2(b);
	ss2 >> n2;
	n2 = b1;
	
	stringstream ss3(c);
	ss3 >> n3;
	n3 = c1;
	
	if(n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	if(n2 > n3)
	{
		int temp1 = n2;
		n2 = n3;
		n3 = temp1;
	}
	
	
	if(n1 > n2)
	{
		int temp3 = n1;
		n1 = n2;
		n2 = temp3;
	}
	
	cout << n1 << n2 << n3;
	
}*/


