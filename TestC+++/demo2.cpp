#include <iostream>

using namespace std;

int main() 
{
    //引用
    int a = 2;
    int &b = a;
    int &c = b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "a的地址 = " << &a << endl;
    cout << "b的地址 = " << &b << endl;
    cout << "c的地址 = " << &c << endl;
    return 0;
}