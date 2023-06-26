#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void tong1(int n)//S(n) = 1 + 2
{
    long s = 0;
     for (int i = 1; i <=n; i++)
     {
        s+=i;
     }
     cout<<"ket qua 1 : "<<s;
}
void tong2(int n)//S(n) = 1^2 + 2^2
{
    long s = 0;
     for (int i = 1; i <=n; i++)
     {
        s+=i*i;
     }
     cout<<endl<<"ket qua 2 : "<<s;
}
void tong3(int n)// S(n) = 1 + ½ + 1/3 + … + 1/n
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + 1.0 / i;
     }
     cout<<endl<<"ket qua 3 : "<<S;
}
void tong4(int n)//S(n) = 1/2 + 1/4 + 1/6 + … + 1/2n
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + 1.0 / (2 * i);
     }
     cout<<endl<<"ket qua 4 : "<<S;
}
void tong5(int n)//S(n) = 1/2 + 1/4 + 1/6 + … + 1/2n
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + 1.0 / (2 * i);
     }
     cout<<endl<<"ket qua 5 : "<<S;
}
void tong6(int n)//S(n) = 1/1×2 + 1/2×3 +…+ 1/(n x (n + 1))
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + 1.0 / (i * (i + 1));
     }
     cout<<endl<<"ket qua 6 : "<<S;
}
void tong7(int n)//S(n) = 1/2 + 2/3 + 3/4 + …. + n / (n + 1) 
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + (float)i / (i + 1);
     }
     cout<<endl<<"ket qua 7 : "<<S;
}
void tong8(int n)//S(n) = 1/2 + 3/4 + 5/6 + …. + (2 * n + 1) / (2 * n + 2) 
{
    float S;
     S = 0;
     for (int i = 1; i <=n; i++)
     {
        S = S + (float)(2 * i + 1) / (2 * i + 2);
     }
     cout<<endl<<"ket qua 8 : "<<S;
}
void tong9(int n)// T(n) = 1 x 2 x 3…x N 
{
    float p = 1;
     for (int i = 1; i <=n; i++)
     {
        p = p * i;
     }
     cout<<endl<<"ket qua 9 : "<<p;
}
void tong10(int n)//T(x, n) = x^n
{
    float x, z;
    cout<<endl<<"Nhap co so x : ";
    cin>>x;
    cout<<"Nhap mu n : ";
    cin>>n;
     for (int i = 1; i <=n; i++)
     {
        z = pow(x, n);
     }
     cout<<endl<<"ket qua 10 : "<<x<<"^"<<n<<" = "<<z;
}
void tong11(int n)//S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
{
    long S = 0, P = 1;
     for (int i = 1; i <=n; i++)
     {
        P = P * i;
        S = S + P;
     }
     cout<<endl<<"ket qua 11 : "<<S;
}
void tong12(int n)//S(n) = x + x^2 + x^3 + … + x^n 
{
    float x, T = 1, S = 0;
    cout<<endl<<"Nhap vao so x: ";
    cin>>x;
    cout<<"Nhap vao so n: ";
    cin>>n;
     for (int i = 1; i <=n; i++)
     {
        T = T * x;
        S = S + T;
     }
     cout<<endl<<"ket qua 12 : "<<S;
}
void tong13(int n)//S(n) = x^2 + x^4 + … + x^2n
{
    float x, T = 1, S = 0;
    cout<<endl<<"Nhap vao so x: ";
    cin>>x;
    cout<<"Nhap vao so n: ";
    cin>>n;
     for (int i = 1; i <=n; i++)
     {
        T = pow(x, (2 * i ));
        S = S + T;
     }
     cout<<endl<<"ket qua 13 : "<<S;
}
void tong14(int n)//S(n) = x + x^3 + x^5 + … + x^2n - 1
{
    float x, T = 1, S = 0;
    cout<<endl<<"Nhap vao so x: ";
    cin>>x;
    cout<<"Nhap vao so n: ";
    cin>>n;
     for (int i = 1; i <=n; i++)
     {
       T = pow(x, (2 * i - 1 ));
       S = S + T;
     }
     cout<<endl<<"ket qua 14 : "<<S;
}
int main()
{
    int n;
    cout<<"nhap vao so N : ";
    cin>>n;
    tong1(n);
    tong2(n);
    tong3(n);
    tong4(n);
    tong5(n);
    tong6(n);
    tong7(n);
    tong8(n);
    tong9(n);
    tong10(n);
    tong11(n);
    tong12(n);
    tong13(n);
    tong14(n);
}