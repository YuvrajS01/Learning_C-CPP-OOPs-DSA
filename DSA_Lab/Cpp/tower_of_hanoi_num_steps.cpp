#include<iostream>
using namespace std;
int numSteps(int n){
    if(n==0)
    return 0;
    return 2*numSteps(n-1) + 1;
}
int main(){
    int N;
    cout<<"Enter number of disks: ";
    cin>>N;
    cout<<"Number of steps required: "<<numSteps(N)<<"\n";
}