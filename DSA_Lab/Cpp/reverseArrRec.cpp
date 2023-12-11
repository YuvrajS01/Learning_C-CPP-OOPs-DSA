#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void reverseArr(int arr[], int start, int end){
    if(end<=start) 
    return;
    swap(&arr[start], &arr[end]);
    reverseArr(arr, start+1, end-1 );
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
    cout<<"Giver array is:    ";
    displayArr(arr, N);
    reverseArr(arr, 0, N-1);
    cout<<"Reversed array is: ";
    displayArr(arr, N);
}