#include<iostream>
using namespace std;
int main(){

    cout<<"Happy Valinetine's Day..."<<endl;
    cout<<"I love you...what about you ?? "<<endl;
    int choice;
    cout<<"Enter 1 for ye s"<<endl;
    cout<<"Enter 0 for no"<<endl;
    cin>>choice;
    while(true){
        if(choice==1){
            cout<<"Thank youu...love you too..."<<endl;
            return 0;
        }
        else{
            cout<<"Wrong choice...answer again ( 1 for yes and 0 for no )"<<endl;
            cin>>choice;
        }
    }    
    return 0;
}