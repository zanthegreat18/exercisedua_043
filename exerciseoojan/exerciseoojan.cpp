#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; 
public:
    bidangDatar() { 
        x = 0;
    }
    virtual void input() {} 
    virtual float Luas(int a) { return 0; } 
    virtual float Keliling(int a) { return 0; } 
    void setX(int a) { 
        this->x = a;
    }
    int getX() { 
        return x;
    }
};




class Lingkaran :public bidangDatar {
public:
    void input() {
        int r;
        cout << "lingkaran dibuat" << endl;
        cout << "Masukkan jejari : ";
        cin >> r;
        setX(r);
    }

    float Luas(int a) {
        return 3.14 * a * a;
    }

    float Keliling(int a) {
        return 2 * 3.14 * a;
    }
};




class Bujursangkar :public bidangDatar {
public:
    void input() {
        int s;
        cout << "bujursangkar dibuat" << endl;
        cout << "Masukkan sisi : ";
        cin >> s;
        setX(s);
    }

    float Luas(int a) {
        return a * a;
    }

    float Keliling(int a) {
        return 4 * a;
    }
};




int main() {
    bidangDatar* b;
    Lingkaran lingkaran;
    Bujursangkar bujursangkar;
    b = &lingkaran;
    b->input();
    cout << "Luas Lingkaran = " << b->Luas(b->getX()) << endl;
    cout << "Keliling Lingkaran = " << b->Keliling(b->getX()) << endl;
    b = &bujursangkar;
    b->input();
    cout << "Luas Bujursangkar = " << b->Luas(b->getX()) << endl;
    cout << "Keliling Bujursangkar = " << b->Keliling(b->getX()) << endl;

    return 0;
} 