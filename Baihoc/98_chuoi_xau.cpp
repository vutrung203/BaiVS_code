#include<iostream>
using namespace std;
int main(){
string st;
int count;
char input;
int index;
cout << "Nhap chuoi xau: ";
getline(cin,st);
count = 0;
cout << "Nhap gia tri cant kiem tra: ";
cin >> input;
index = 0;
while(st[index] != '\0')
{
if(st[index] == input)
{
count++;
}
index++;
}
cout << "ket qua: " << count;
}