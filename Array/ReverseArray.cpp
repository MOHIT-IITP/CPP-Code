// Reverse the array

#include<iostream>
using namespace std;

void reverse_array(int a[],int size)
{
    int reversed[size];
    for(int i =0;i<size;++i)
    {
        reversed[i]=a[size-i-1];
    }
    for(int j = 0;j<sizeof(reversed)/sizeof(int);++j)
    {
        cout<<reversed[j];
        cout<<endl;
    }
}



int main()
{
    int a[4]={1,2,3,4};
    int size;
    cin>>size;
    reverse_array(a,size);
    return 0;
}