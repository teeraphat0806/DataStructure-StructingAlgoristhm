#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;     

    int a[n1][n2];
    int b[n1][n2];

    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            cin >> a[i][j];

    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            cin >> b[i][j];

    int sum[n1][n2];
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    char c;
    cin >> c;
    
    int c3;
    cin >> c3;         

    if(c == 'T')
    {
        int id[c3];
        for(int k = 0; k < c3; k++)
        {
            cin >> id[k];   
        }

        for(int k = 0; k < c3; k++)
        {
            int row = id[k] - 1;   

            for(int j = 0; j < n2; j++)
            {
                cout << sum[row][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(c == 'N')
    {
        int id[c3];
        for(int k = 0; k < c3; k++)
        {
            cin >> id[k];  
        }
        
        for(int i = 0; i < n1; i++)
        {
            int co = id[i] - 1; 
            
            for(int k = 0; k < c3; k++)
            {
                  
                cout << sum[i][co] <<" ";
            }
            cout <<"\n";
        }
    }

    return 0;
}