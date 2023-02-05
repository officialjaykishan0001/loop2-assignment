#include<iostream>
using namespace std;
//Q : take an integer from user and return the factorial of that number.
int main()
{
    int x;
    cout<<"enter the your number : ";
    cin>>x;
    int ans = 1;
    if(x==0)
    {
        ans = 0;
    }
    for(int i=1;i<=x;i++)
    {
        //ans = 1;
        ans *= i;
    
    }
    cout<<"the answer is : "<<(ans)<<endl;
    return 0;
}