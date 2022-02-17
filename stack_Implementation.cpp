#include<bits/stdc++.h>
using namespace std;

class Stack {
    public: 
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1)
        {
            arr[top++] = element;
        }
        else {
            cout<< "Stack Overflow";
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< "Stack Underflow";
        }
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout<< "Stack is Empty";
            return -1;
        }
    }

    bool isEmpty(){
         if(top==-1)
            return true;
        else return false;
    }

};




int main(){


    Stack st(5);
    st.push(22);
    st.push(33);
    st.push(44);

    cout<<st.peek()<<endl;

    
    return 0;
}