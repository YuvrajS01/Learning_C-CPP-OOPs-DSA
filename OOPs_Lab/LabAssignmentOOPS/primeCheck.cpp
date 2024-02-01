#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);
int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(isPrime(n))
    cout<<"The number is prime\n";
    else
    cout<<"The number is not prime\n";
    return 0;
}
bool isPrime(int n) {
    if(n == 1)
    return false;
    int flag=0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0){
            flag++;
            break;
        }
    }
    if(flag == 0)
    return true;
    return false;
}