#include <iostream>
#include <cmath>

using namespace std;

// Hàm tính modulo a^b mod p
int modulo(int a, int b, int p) {
    int result = 1;
    a = a % p;

    while (b > 0) {
        if (b & 1)
            result = (result * a) % p;

        b = b >> 1;
        a = (a * a) % p;
    }

    return result;
}

// Hàm tính khóa chung theo thuật toán Diffie-Hellman
int diffieHellman(int p, int q) {
    int alphax, betax, aliceK, bobK;

    cout << "Khoa rieng (Alice x): ";
    cin >> alphax;

    cout << "khoa rieng (Bob x): ";
    cin >> betax;

    // Tính khóa Alice
    aliceK = modulo(q, alphax, p);

    // Tính khóa Bob
    bobK = modulo(q, betax, p);

    // In ra khóa Alice và Bob
    cout << "Khoa cong khai (Alice y): " << aliceK << endl;
    cout << "Khoa cong khai (Bob y): " << bobK << endl;

    // Tính khóa chung
    int sharedKey1 = modulo(aliceK, betax, p);
    int sharedKey2 = modulo(bobK, alphax, p);

    if (sharedKey1 == sharedKey2)
        return sharedKey1;
    else
        return -1;
}

int main() {
    int p, q;

    cout << "Nhap gia tri p (p la so nguyen to): ";
    cin >> p;

    cout << "Nhap gia tri g (g la so nguyen to): ";
    cin >> q;

    int sharedKey = diffieHellman(p, q);

    if (sharedKey != -1)
        cout << "Khoa chung: " << sharedKey << endl;
    else
        cout << "Khong the thiet lap khoa." << endl;

    return 0;
}