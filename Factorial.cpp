// THIS IS CODE TO FIND OUT FACTORIAL

#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main()
{
    int x;
    cin>>x;
    int result = factorial(x);
    cout<<"The Answer is :"<<result;
    return 0;
}