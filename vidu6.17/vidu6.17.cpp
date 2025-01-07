// vidu6.17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
int a[100];
void nhap()
{
    int i;
    cout << "nhap vao so phan tu = "; cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void tbc(int tg[], int m)
{
    int i, dem;
    double tong=0;
    dem = 0;
    for (i = 0; i < m; i++)
        if (tg[i] % 2 == 0)
        {
            dem = dem + 1;
            tong = tong + (double)a[i];
        }

    if (dem != 0)
        cout << "trung binh cong cac so chan la: " << tong / dem;
    else
        cout << "khong co so chan trong mang. ";
}
int main()
{
    nhap();
        tbc(a, n);
        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
