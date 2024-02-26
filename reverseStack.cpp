#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int>& s,int d){
    if(s.empty()){
        s.push(d);
        return;
    }
    int ele=s.top();
    s.pop();
    insertBottom(s,d);
    s.push(ele);

}
void reverse(stack<int>& s){
    if(s.empty()){
        return;
    }
    int element=s.top();
    s.pop();
    reverse(s);
    insertBottom(s,element);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
   return 0;
}