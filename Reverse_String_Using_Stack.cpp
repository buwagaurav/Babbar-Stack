#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str;
    cin>>str;

    stack<char> st;
    
    for(int i=0;i<str.size();i++){
        st.push(str[i]);
    }
    
    string ans="";
    
    while(!st.empty()){
        char c=st.top();
        ans.push_back(c);
        st.pop();
    }
    
    cout<<ans;
    
    return 0;
}