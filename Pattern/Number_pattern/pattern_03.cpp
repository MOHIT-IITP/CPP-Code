// printing the pattern with number
// output will be something like this 

// 123456
// 12345
// 1234
// 123
// 12
// 1


#include<iostream>

using namespace std;

void pattern(int row)
{
	for(int i=row;i>0;--i)
	{
	    int num=1;
		for(int col=i;col>0;--col)
		{
			cout<<num;
			num++;
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}