#include<iostream>
inline int square(int a){
    return a*a;
}
int main() {
    std::cout<<"5 square is: "<<square(5)<<"\n";
    return 0;
}