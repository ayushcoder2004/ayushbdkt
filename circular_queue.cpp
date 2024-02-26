#include<iostream>
#define n 6
using namespace std;
int f=-1,r=-1;
int* q=new int(n);

void enque(int d){
    if((f==0 && r==n-1)|| r==f-1){
        cout<<"Queue is Full"<<endl;;
        return;
    }
    if(f==-1){
        f=0,r=0;
    }
    else if(f!=0 && r==n-1){
        r=0;
    }
    else{
        r++;
    }
    q[r]=d;
}

void deque(){
    if(f==-1){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(f==r){
        f=r=-1;
    }
    else if(f==r-1){
        f=0;
    }
    else
        f++;
}

void print(){
    if(f==r){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(f<=r){
    for(int i=0;i<r;i++){
        cout<<q[i]<<" ";
    }
    }else{
    for(int i=f;i<n;i++){
        cout<<q[i]<<" ";
    }
    for(int i=0;i<r;i++){
        cout<<q[i]<<" ";
    }
    }
    cout<<endl;
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
    deque();
    print();
    enque(100);
    print();
    deque();
    print();
    deque();
    print();
    return 0;
}