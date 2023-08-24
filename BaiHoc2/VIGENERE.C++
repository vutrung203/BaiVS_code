#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    char msg[] = "MONARCHY";
    char key[] = "HELLO";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], mahoa[msgLen], giaima[msgLen];
 
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLen; ++i)
        mahoa[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    mahoa[i] = '\0';
 
    //decryption
    for(i = 0; i < msgLen; ++i)
        giaima[i] = (((mahoa[i] - newKey[i]) + 26) % 26) + 'A';
 
    giaima[i] = '\0';
 
    cout<<"Nhap vao : "<<msg;
    //cout<<endl<<"Key: "<<key;
    //cout<<endl<<"New Key: "<<newKey;
    cout<<endl<<"Ma Hoa : "<<mahoa;
    cout<<endl<<"Giai Ma : "<<giaima;
 
return 0;
}