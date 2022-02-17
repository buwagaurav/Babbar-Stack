#include<bits/stdc++.h>
using namespace std;


    bool isValid(string s) {
        stack<char> c;
        int i;
        char x;
        for(i=0;s[i];i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {c.push(s[i]);continue;}
            if(c.empty())return false;
            switch(s[i]){
                case ')':   x=c.top();c.pop();
                            if (x == '{' || x == '[') 
                                return false; 
                            break;
                case '}':   x=c.top();c.pop();
                            if (x == '(' || x == '[') 
                                return false; 
                            break;
                case ']':    x=c.top();c.pop();
                            if (x == '(' || x == '{') 
                                return false; 
                            break;
            }
        }
        return c.empty();
    }
    


int main(){
    
    string str;
    cin>>str;
    if(isValid(str)){
        cout<<"Balanced"<<"\n";
    }else {
        cout<<"Not Balanced"<<"\n";
        }
    return 0;
}