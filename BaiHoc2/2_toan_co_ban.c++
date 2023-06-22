#include<iostream>
using namespace std;

int main()
{
    int a = 500 , b = 200;
    int tong = a+b;
    int hieu = a-b;
    int tich = a*b;
    float thuong = (float)a/b;
    int du = a%b;
    a += b;// a = a + b
    a -= b;// a = a - b
    a *= b;// a = a * b
    a /= b;// a = a / b
    a %= b;// a = a % b
    cout<<tong<<" "<<hieu<<" "<<tich<<" "<<thuong<<" "<<du<<" "<<endl;

    // toan_1 so sanh toan_2 => tra ve true = 1 , false = 0
    bool ok = a <= b;
    //bool ok = a == b;
    //bool ok = a != b;
    cout<<ok<<endl;

    int c = 100;
    //int d = c++;// c = 100 --> d = 100 --> c++ = 101
    int d = ++c;// c = 100 -->  ++c = 101 --> d = 101
    cout<<c<<" "<<d<<endl;

    // toan logic
    // and : && - or : || - not : !

    //int a = 200, b = 200 , c = 300 , d = 400;
    int res = (a<=b) && (c<=d);
    cout<< res<<endl;

}