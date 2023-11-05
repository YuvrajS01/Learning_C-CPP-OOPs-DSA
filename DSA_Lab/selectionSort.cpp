#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int N = 5;
    int arr[N],i,min,j;
    cout<<"Enter Elements\n";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<N; i++)
    {
        min = i;
        for(j=i+1; j<N; j++)
        {
            if(arr[min]>arr[j])
            min = j;
        }
        swap(arr[min],arr[i]);
    }
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<'\t';
    }
}