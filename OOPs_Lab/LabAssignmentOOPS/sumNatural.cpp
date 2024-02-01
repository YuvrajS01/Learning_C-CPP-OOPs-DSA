#include<iostream>
using namespace std;
int main() {
    int sumF = 0;
    int i;
    for(i = 1; i<=100; i++) {
        sumF+=i;
    }
    cout<<"Sum of First 100 Natural Numbers using For loop: "<<sumF<<endl;

    i=0;
    int sumWh=0;
    while(i <= 100) {
        sumWh += i;
        i++;
    }
    cout<<"Sum of First 100 Natural Numbers using While loop: "<<sumWh<<endl;

    i=0;
    int sumDoWh = 0;
    do {
        sumDoWh += i;
        i++;
    } while (i <= 100);
    cout<<"Sum of First 100 Natural Numbers using Do While loop: "<<sumDoWh<<endl;

}