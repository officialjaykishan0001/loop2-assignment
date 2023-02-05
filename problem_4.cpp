#include<iostream>
//q : reverse the user entered number .?
//algorithm : 
//create a verieble integer varieble named num.
//take input from user and initialised that input into num.
//user for loop for traverser.
//in the traverser devide num and get modulo of num as num%10 and num/10.
//let's coded this algorithm  .
//dry run..
//num = 1 
// i = 2, i<=1 
// print : 32
using namespace std;

int main()
{
    //take intput.
    int num;
    cout<<"enter the your number which you want to reverse : ";
    cin>>num;

    //for loop for reversal..
    for(int i=0;i<=num;i++)
    {

        cout<<(num%10);
        num = num/10;

    }

    //last digit for reverse
    cout<<(num);
    cout<<endl;

    //end of the program ..
    return 0;
}
/*JAI JAI JAI BAJARANGBALI...
THIS PROGRAM CODED BY JAYKISHAN KHARWAR
AT
TIME _ 7:56
DATE : 01-02-2023*/