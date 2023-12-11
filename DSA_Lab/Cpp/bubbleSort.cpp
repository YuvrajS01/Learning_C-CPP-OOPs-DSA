#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int N = 5;
    int arr[N],i,j;
    cout<<"Enter Elements\n";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1])
            
            swap(&arr[j],&arr[j+1]);
        }
    }
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<'\t';
    }
}