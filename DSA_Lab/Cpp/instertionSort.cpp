#include<iostream>
using namespace std;
int main(){
    int N = 5;
    int arr[N],i,key,j;
    cout<<"Enter Elements";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<N;i++){
        key = arr[i];
        j = i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<'\t';
    }
}