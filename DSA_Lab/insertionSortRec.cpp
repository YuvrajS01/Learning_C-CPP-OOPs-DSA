#include<iostream>
using namespace std;
void insertionSort(int arr[], int N){
    if(N<=1)
    return;
    insertionSort(arr, N-1);
    int key = arr[N-1];
    int j = N-2;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;

}
void displayArr(int arr[], int N){
    for(int i=0; i<N; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<'\n';
}
int main(){
    int N, i;
    cout<<"Enter number of elements: ";
    cin>>N;
    int arr[N];
    cout<<"Enter elements: ";
    for(i = 0; i<N; i++){
        cin>>arr[i];
    }
    cout<<"Giver array is: ";
    displayArr(arr, N);
    insertionSort(arr, N);
    cout<<"Sorted array is: ";
    displayArr(arr, N);
}