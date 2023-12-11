#include<iostream>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void displayArr(int arr[], int N){
    for(int i = 0; i < N; i++){
        std::cout<<arr[i]<<'\t';
    }
    std::cout<<"\n";
}
void insertionSwap(int arr[], int N){
    // for(int i=1;i<N;i++){
    //     int key = arr[i];
    //     int j = i-1;
    //     while(j>=0&&arr[j]>key){
    //         arr[j+1]=arr[j];
    //         j=j-1;
    //     }
    //     arr[j+1]=key;
    //     displayArr(arr, 5);
    // }
    for(int i = 1; i < N; i++ ){
        for(int j = i-1; j>=0; j--){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
        displayArr(arr, 5);
    }
    
}
void bubbleSort(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N - i - 1; j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j], &arr[j+1]);
        }
        displayArr(arr, 5);
    }
}
void selectionSort(int arr[], int N){
    for(int i = 0; i<N-1; i++){
        int min = i;
        for(int j = i+1; j < N; j++){
            if(arr[min]>arr[j])
            min = j;
        }
        swap(&arr[min], &arr[i]);
        displayArr(arr, 5);
    }
}
int main(){
    int N = 5;
    int arr[] = {4, 1, 5, 0, 2};
    displayArr(arr, 5);
    insertionSwap(arr, 5);
    //bubbleSort(arr, 5);
    //selectionSort(arr, 5);
    return 0;
}