/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n=0;
	
	cin >> n;
	double c[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> c[i];
	}
	
	double fc[n];
	
	for(int i=0;i<n;i++)
	{
		fc[i] = 5*(c[i]- 32 )/9;
	}
	
	cout << fixed << setprecision(2);
	for(int i=0;i<n;i++)
	{
		cout << fc[i] << "\n";
	}
	
}
#include<iostream>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	double a[n];
	double mean=0,sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum += a[i];
	}
	
	mean = sum/n;
	cout << mean;
}
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	double h=0,r=0;
	double sum=0;
	cin >> h >> r;
	sum = 3.1419*h*r*r;
	cout << fixed << setprecision(1);
	cout << sum;
}
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char number[11];
	char datesent[11];
	char datedaysent[11];
	char store[20];
	
	cout << "Please enter the invoice number:";
	cin.getline(number,100);
	int len1 = strlen(number);
	
	cout << "Please enter date: ";
	cin.getline(datesent,100);
	int len2 = strlen(datesent);
    
    cout << "Please enter due date: ";
    cin.getline(datedaysent,100);
	int len3 = strlen(datedaysent);
	
	cout << "Please enter the customer name: ";
    cin.getline(store,100);
	int len4 = strlen(store);
	
    
	int unit[20];
	int price[20];
	int n=0,j=0,k=0;
	
	cin >> n;
	char item[n][20];
	for(int i=0;i<n;i++)
	{
		j++;
		    cout << "Pease enter the name of item " << j <<" ";
	        cin  >> item[i];
	        cout << "Please enter the quantity of item " << j <<" ";
	    	cin >> price[i];
	    	cout << "Please enter the name of item " << j <<" ";
		    cin >> unit[i]; 
	}
	
	double sum[n]={0},vat=0,sumvat=0,sum1=0,sumvat1=0,vat1=0;
	for(int i=0;i<n;i++)
	{
		sum[i] += price[i]*unit[i];
	}
	
    for(int i=0;i<n;i++)
	{
		 sum1 += sum[i];
	}
	vat1 = sum1*0.07;
	sumvat1 = sum1+vat1;
	
    cout << "Invoice No.:" << number <<"\t" <<"Date: "<<datesent;
    cout << "\n";
    cout << "Customer: "<< datedaysent << "\t" << "Due Date:"<<store;
    cout << "\n";
    cout << "\n";
    
    cout << "# | item name        |     unit price |    Quantity    |Total Price \n";
    cout << "---------------------------------------------------------------------- \n";
    for(int i=0;i<n;i++)
    {
    	k++;
    	cout << k << " |"<< item[i] <<"           |"<< price[i] << "               |" << unit[i] << "           |" << sum[i] <<"\n";
	}
	cout << "                      " << "Total Amount:" << "           "<<sum1 << "\n";
	cout <<"                       " << "         VAT:" << "           "<<vat1 << "\n";
	cout <<"                       " << "  Amount Due:" << "           "<<sumvat1;
    
}
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int a=0,b=0,ts=10,tb=6,count1=0,count2=0,day1=0,day2=0,j=1;
	cin >> a >> b;
	cin >> tb >> ts;
	
	if(a == 0)
	{
		cout <<"Unable to finish order";
		return 0;
	}
	
	for(int i=1;i<tb;i++)
	{
	   day1 = (6*i)*a; 
	   
	    if (day1 >= tb)      
	    {
	        count1 = i;      
	        break;           
	    }   
   }  
	  
	for(int i=1;i<ts;i++)
	{
	   day2 = (10*i)*b; 
	   
	    if (day2 >= ts)      
	    {
	        count2 = i;      
	        break;           
	    }   
   }  
   if(count1 > count2)
   {
   	 cout << count1;
   }
   else if(count1 < count2)
   {
   	   cout << count2;
   }
   else if(count1 == count2)
   {
   	   cout << count1+1;
   }
	
}
*/













