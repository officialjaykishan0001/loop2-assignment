#include<iostream>
using namespace std;
// Q : print the sum of the n natural numbers where n is taken from the user .
int main()
{

    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout<<"the result is here : "<<(sum)<<endl;
    return 0;
}