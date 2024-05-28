#include<bits/stdc++.h>

using namespace std;

void m()
{
	map<int, int> mp;
	mp.insert({2,4});

	// how to print the all the elem in the map 
	for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
    }


    // inserting pair of eleme in the map
    mp.insert({1,2});

    
    // auto hw = mp.find(1);
    // cout<<*hw.first<<endl


    // using lower bound and upper bound
    auto it = mp.lower_bound(1);
    auto it = mp.upper_bound(2);
    

    // Another way to print all the elem in the map
    for(auto he : mp)
    {
    	cout<<he.first<<endl<<he.second<<endl;
    }


}

int main()
{
	cout<<"the output is :"<<endl ;
	m();
	return 0;
}
