#include<iostream>

using namespace std;

void print_n_to_1(int n)
{
    while(n>0)
    {
        cout<<n<<endl;
        n--;
    }
}

int main()
{
    int x;
    cin>>x;
    cout<<"Answer is ";
    print_n_to_1(x);
    return 0;
}