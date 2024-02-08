

#include<iostream>
using namespace std;


void pattern(int n)
{
    int row,col;
    for(row= 0;row<=n;++row)
    {
        for(col=0;col<=row;++col)
        {
            cout<<" ";
        }
        for(col=0;col<=5;++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int a;
    cin>>a;
    pattern(a);
    return 0;
}

