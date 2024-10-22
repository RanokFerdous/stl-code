#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>st; //************stack is    LIFO.

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;

    st.pop();
    while(st.size()>0){
        cout<<st.top()<<" ";  // 3 2 1
        st.pop();
    }cout<<endl;


    //---------------------------------------------------

    if(st.empty()){
        cout<<"stack is empty"<<endl;   //we already doing the stack is empty.
    }else cout<<"stack is not empty"<<endl;

}
