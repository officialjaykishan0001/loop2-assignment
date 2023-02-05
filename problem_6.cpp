#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of the row : ";
    cin>>n;

    for(int i=1;i<=n/2;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<(char(64+j));
        }
        cout<<endl;
    }

    for(int i=n/2;i>=0;i--)
    {
        
           for(int k=1;k<=n/2*2-2;k++)
           {
            cout<<" ";
           }
        
        for(int j=1;j<=i;j++)
        {
            cout<<char(64+j);
        }
        cout<<endl;
    }
}
/*jai jai jai bajarangbali...
this program coded by jaykishan kharwar
at
time_12:23
date_5/2/2023*/