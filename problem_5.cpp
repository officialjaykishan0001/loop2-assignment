//question : print the x shape using star pattern .

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter the n : ";
    cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=n;j++)
    {
        if(i==j || i+j==n-1)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}
/*Jai jai jai bajarangbali...
this program coded by jaykishan kharwar
at
time_12:16
date_ 5/2/2023
*/