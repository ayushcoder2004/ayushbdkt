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
    int pivotIndex=s+count;
    swap(a[s],a[pivotIndex]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(a[i],a[j]);
            i++,j--;
        }
    }
    return pivotIndex;
}

void quickSort(int* a,int s,int e){
    if(s>=e){return;}
    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
    int a[]={1,4,3,2,6,5,3,65,5,3,2};
    int n=11;
    quickSort(a,0,n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}