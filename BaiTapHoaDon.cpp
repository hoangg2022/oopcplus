#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    char MaSV[30];
    char Hoten[30];
    int tuoi;
    float diem;

public:
    void nhap()
    {
        cout << "Nhap ma sv: ";
        fflush(stdin);
        gets(MaSV);
        cout << "Nhap ho va ten: ";
        fflush(stdin);
        gets(Hoten);
        cout << "Nhap tuoi: ";

        cin >> tuoi;
        cout << "Nhap diem: ";
        cin >> diem;
    }
    void xuat()
    {
        cout << "Ma Sv la: " << MaSV << endl;
        cout << "Ho va ten la: " << Hoten << endl;
        cout << "Tuoi cua SV la: " << tuoi << endl;
        cout << "Diem cua SV la: " << diem << endl;
        cout << endl;
    }
};

int main()
{
    student a, b;
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
}
