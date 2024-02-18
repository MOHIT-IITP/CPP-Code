// printing the pattern with number

#include<iostream>

using namespace std;

void pattern(int row)
{
	int i=0;
	for(int i =0;i<row;i++)
	{
		for(int col =0;col<i;++col)
		{
			cout<<i;
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