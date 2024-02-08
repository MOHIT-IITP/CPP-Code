// Increase the size of the array

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int *p, *q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=2;p[1]=2;p[2]=3;p[3]=5;p[4]=5;
    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;++i)
    {
        q[i]=p[i];
    }

    delete p;
    p=q;
    q=NULL;
    for(int j=0;j<10;++j)
    {
        cout<<p[j]<<endl;
    }
    return 0;
}
