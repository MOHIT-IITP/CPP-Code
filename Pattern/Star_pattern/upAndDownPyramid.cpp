/* The output will be something like this


***********
 *********
  *******
   *****
    ***
     *
     *
    ***
   *****
  *******
 *********
***********

*/





#include<iostream>


using namespace std;

void pattern(int n)
{
	int row,col;
    for(row=n;row>0;row--)
    {
    	for(col=1;col<=n-row;col++)
    	{
    		cout<<" ";
    	}
    	for(col=1;col<=2*row-1;col++)
    	{
    		cout<<"*";
    	}
    	cout<<endl;
    }
	for(row=1;row<=n; row++)
	{
		for(col=1;col<=n-row;col++)
		{
			cout<<" ";
		}
		for(col=1;col<=2*row-1;col++)
		{
			cout<<"*";
		}
		cout<<endl;
    }

}


int main()
{
	int m;
	cin>>m;
	pattern(m);
	return 0;
}