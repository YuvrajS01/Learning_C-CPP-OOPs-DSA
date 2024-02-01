#include<iostream>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b; 
}
int main() {
    int a,b,c,d;
    a = 10, b = 33;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"Max "<<max(a,b)<<endl;
    a = 22, b = 99, c = 12;
    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    cout<<"Max "<<max(a,max(b,c))<<endl;
    a = 32, b = 36, c = 1, d = 100;
    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
    cout<<"Max "<<max(max(a,b),max(c,d))<<endl;
}