#include<iostream>
#include<string>
using namespace std;

string encode(string s, int k){
    string cipher;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            char new_char = ((s[i] - 65) + k) % 26 + 65;
            cipher +=new_char;
        }else if(s[i]>=97 && s[i]<=122){
            char new_char = ((s[i] - 97) + k) % 26 + 97;
            cipher +=new_char;
        }else{
            cipher+=s[i];
        }
    }
    return cipher;
}
int main(){
    int k;
    string s;
    cout<<" Nhap k(k>1): "; cin>>k;
    cin.ignore();
    cout<<" Nhap xau s: "; getline(cin,s);
    string cipher = encode(s,k);
    cout<<"Chuoi sau khi duoc ma hoa la: "<<cipher;
}

/*
string encrypt(string text, int s)
{
	string result = "";


	for (int i=0;i<text.length();i++)
	{

		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);


	else
		result += char(int(text[i]+s-97)%26 +97);
	}

	return result;
}

int main()
{
	string text="cong nghiep quang ninh";
	int s = 4;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	cout << "\nCipher: " << encrypt(text, s);
	return 0;
}
*/
/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
//Zm=26;
char *Proccess(char *input, int k, int method){
    char *temp = new char[1000]; strcpy(temp,input);
    for (int i=0; i<strlen(temp); i++){
        int x = (int)temp[i]; 
        int y = (method==0)?(x+k%26):(x-k%26); 
        int sp; 
        if (x>64 && x<91) 
            sp=0; 
        else if (x>96 && x<123) 
            sp=32; 
        else {
            y=x; 
            continue;
        } 
        if (y>90+sp) y-=26;
        else if (y<65+sp) y+=26; 
        temp[i] = (char)y; 
    } 
    return temp; 
} 
char *Encrypt(char *input, int k){ 
    return Proccess(input,k,0); 
} 
char *Decrypt(char *input, int k){ 
    return Proccess(input,k,1); 
} 

main(){ 
    int k=9; 
    char str[]="hen gap nhau"; 
    // printf("%s",Encrypt(str,k)); 
    printf("\n%s -> %s -> %s\n",str,Encrypt(str,k),Decrypt(Encrypt(str,k),k));
    getch();
}
*/