// printing the pattern with number
// output will be something like this 

// 1
// 12
// 123
// 1234
// 12345


#include<iostream>

using namespace std;

void pattern(int row)
{
	for(int i =0;i<row;i++)
	{
	    int num=1;
		for(int col =0;col<i;++col)
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