#include <iostream>
using namespace std;
struct complex
{
    float real;
    float imag;
};
complex add(complex a, complex b);
complex sub(complex a, complex b);
complex mul(complex a, complex b);
complex div(complex a, complex b);
int main()
{
    complex a, b, c;
    int ch;
    void menu(void);
    cout << "Enter the first complex number\n";
    cin >> a.real >> a.imag;
    cout << "Enter the second complex number\n";
    cin >> b.real >> b.imag;
    menu();
    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            c = add(a, b);
            cout << "Addition of two complex numbers\n";
            cout << c.real << "+i" << c.imag << endl;
            break;
        case 's':
            c = sub(a, b);
            cout << "Subtraction of two complex numbers\n";
            cout << c.real << "+i" << c.imag << endl;
            break;
        case 'm':
            c = mul(a, b);
            cout << "Multiplication of two complex numbers\n";
            cout << c.real << "+i" << c.imag << endl;
            break;
        case 'd':
            c = mul(a, b);
            cout << "Division of two complex numbers\n";
            cout << c.real << "+i" << c.imag << endl;
            break;
        }
    }
}
void menu(void)
{
    cout << "complex number operations\n";
    cout << "menu( )\n";
    cout << "a—addition \n";
    cout << "s—subtraction \n ";
    cout << "m—multiplication \n ";
    cout << "d—division \n";
    cout << "q—quit \n";
    cout << "option, please ?\n";
}
complex add(struct complex a, struct complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.real;
    return (c);
}
complex sub(struct complex a, struct complex b)
{
    complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return (c);
}
complex mul(struct complex a, struct complex b)
{
    complex c;
    c.real = (a.real * b.real) - (a.imag * b.imag);
    c.imag = (a.real * b.imag) + (a.imag * b.real);
    return (c);
}
complex div(struct complex a, struct complex b)
{
    complex c;
    float temp;
    temp = (b.real * b.real) + (b.imag * b.imag);
    c.real = ((a.real * b.real) + (a.imag * b.imag)) / temp;
    c.imag = ((b.real * a.imag) - (a.real * b.imag)) / temp;
    return (c);
}
