#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stack  : LIFO

    // push(),  pop(), empty(), top(), size(),

    //stack<int> st={ 3,6,8,5,6};  // this line is wrong line . we can not use this proces here.
    stack<int>st;
    st.push(4);
    st.push( 8);
    st.push(12);
    st.push(18);

    cout<<" the top value is: "<<st.top() <<endl;

    while( !st.empty())
    {
        cout<<st.top() << " ";

        st.pop();
    }




}
