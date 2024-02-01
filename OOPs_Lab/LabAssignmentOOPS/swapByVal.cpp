#include<iostream>
using namespace std;
void swap(int a, int b) {
    cout<<"In swap fuction: "<<endl;
    
    cout<<"Before Swap a = "<<a<<", b = "<<b<<endl;
    
    int temp = a;
    a = b;
    b = temp;

    cout<<"After Swap a = "<<a<<", b = "<<b<<endl;
}
int main() {
    int a = 10, b = 20;
    swap(a, b);
    cout<<"In Main fuction: "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}