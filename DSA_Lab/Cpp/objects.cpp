#include<iostream>
#include<string>
class Human{
    public:
    std::string name;
    int age;

    void sleep(){
        std::cout<<"Human is sleeping";
    }
    void eat(){
        std::cout<<"Human is eating";
    }

    Human(std::string name, int age){
        this->name = name;
        this->age = age;
    }

};

int main(){
    Human h1 = Human("Yuv", 19);
    std::cout<<"Hi "<<h1.name + "\n";
}
