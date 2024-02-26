#include<iostream>
#include<stack>
using namespace std;
bool solve(string exp){
    stack<char>s;
    for(int i=0;i<exp.size();i++){
        char ch=exp[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }
        else{
            if(!s.empty()){
            char top=s.top();
            if((ch==')' && top=='(')||(ch==']' && top=='[')||(ch=='}' && top=='{')){
                s.pop();
            }
            else{
                return false;
                }
            }
            else{
                return false;
            }
        }
        if(s.empty()){
            return true;
        }
        return false;
    }
}
int main(){
    string exp="(){}[]";
    if(solve(exp)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
   return 0;
}