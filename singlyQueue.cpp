#include<iostream>
#define n 6
using namespace std;
int f=0,r=0;
int* q=new int(n);

void enque(int d){
    if(r==n){
        cout<<"Queue is Full"<<endl;
        return;
    }
    q[r]=d;
    r++;
}

void deque(){
    if(r==0 || f==r){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(f==r){
        f=r=0;
    }
    f++;
}

void print(){
    if(f==r){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    for(int i=f;i<r;i++){
        cout<<q[i]<<" ";
    }cout<<endl;
}

int main(){
    enque(10);
    print();
    enque(20);
    print();
    enque(30);
    print();
    enque(40);
    print();
    enque(50);
    print();
    enque(60);
    print();
    enque(70);
    deque();
    print();
    deque();
    print();
    deque();
    print();
    deque();
    print();
    deque();
    print();
    deque();
    print();
    return 0;
}