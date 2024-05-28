#include<bits/stdc++.h>

using namespace std;

void st()
{
    set<int> st;
    st.insert(3);
    st.insert(2);
    st.insert(2);
    st.insert(1);
    st.emplace(4);

    auto it = st.find(3);
    st.erase(3); // deleted the elem written in the bracket  
    // delete 3


    // printing all the element in the set
    for(auto it =st.begin();it!=st.end();++it)
    {
        cout<<*it<<endl;
    }

    int cnt = st.count(1);
    cout<<cnt;   // 1 is present to it give (1)
                 // when it is not present it will give (0)
}

int main()
{
    st();
    return 0;
}
