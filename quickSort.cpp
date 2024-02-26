#include<iostream>
using namespace std;

int partition(int* a,int s,int e){
    int pivot=a[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<=pivot){
            count++;
        }
    }
    int pi=s+count;
    swap(a[s],a[pi]);

    int i=s,j=e;
    while(i<pi && j>pi){
        while(a[i]<=a[pi]){
            i++;
        }
        while(a[j]>a[pi]){
            j--;
        }
        if(i<pi && j>pi){
            swap(a[i],a[j]);
            i++,j--;
        }
    }
    return pi;
}
void quickSort(int* a,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}
int main(){
    int a[]={1,4,3,4,5,7,4,2,12};
    int n=9;
    quickSort(a,0,n-1);

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}