#include<iostream>
using namespace std;
int x = 7;
int main() {
    int x = 99;
    int* ptr = new int(1);//using new
    *(ptr + 1) = 5;
    *(ptr + 2) = 45;

    cout<<"*(ptr + 2): "<<*(ptr+2)<<endl;//using manipulator
    delete(ptr);//using delete

    cout<<"After using delete\n";
    cout<<"*(ptr + 2): "<<*(ptr+2)<<endl;//garbage value

    cout<<"x = "<<x<<endl;
    cout<<"x in global scope = "<<::x<<endl;//scope resolution
    return 0;
}