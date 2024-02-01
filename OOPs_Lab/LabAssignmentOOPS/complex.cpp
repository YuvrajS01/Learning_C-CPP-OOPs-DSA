#include<iostream>
using namespace std;
class complex {
    
    public:
        float real, img;
        // complex() {}
        // complex(float x, float y) {
        //     real = x;
        //     img = y;
        // }
        void get(){
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>img;
        }
        void display() {
            cout<<real<<" i"<<img<<endl;
        }
        complex sum(complex, complex);
        complex diff(complex, complex);
        complex prod(complex, complex);
        complex div(complex, complex);
};
complex complex::sum(complex a, complex b) {
    complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}
complex complex::diff(complex a, complex b) {
    complex temp;
    temp.real = a.real - b.real;
    temp.img = a.img - b.img;
    return temp;
}
complex complex::prod(complex a, complex b) {
    complex temp;
    temp.real = ((a.real * b.real)-(a.img*b.img));
    temp.img = ((a.real * b.img)+(a.img*b.real));
    return temp;
}
complex complex::div(complex a, complex b) {
    complex temp;
    float c = (b.real * b.real) + (b.img * b.img);
    temp.real = ((a.real * b.real) + (a.img * b.img))/c;
    temp. img = ((b.real * a.img) - (a.real * b.img))/c;
    return temp;
}
void menu() {
    cout<<"Menu"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Divison"<<endl;
    cout<<"5. Exit"<<endl;
}
int main() {
    complex c, c1, c2;
    char ch;
    cout<<"For First Number: \n";
    c1.get();
    cout<<"For Second Number: \n";
    c2.get();
    menu();
    while ((ch = getchar()) != '5')
    {
        switch (ch)
        {
        case '1':
            c = c.sum(c1, c2);
            cout << "Addition of two complex numbers\n";
            cout << c.real << "+i" << c.img << endl;
            break;
        case '2':
            c = c.diff(c1, c2);
            cout << "Subtraction of two complex numbers\n";
            cout << c.real << "+i" << c.img << endl;
            break;
        case '3':
            c = c.prod(c1, c2);
            cout << "Multiplication of two complex numbers\n";
            cout << c.real << "+i" << c.img << endl;
            break;
        case '4':
            c = c.div(c1, c2);
            cout << "Division of two complex numbers\n";
            cout << c.real << "+i" << c.img << endl;
            break;
        }
    }
    return 0;
}