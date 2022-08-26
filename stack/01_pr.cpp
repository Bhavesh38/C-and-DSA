#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    // st.pop();
    cout<<st.empty()<<endl;
    return 0;
}