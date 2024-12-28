#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, L, T;

    // Nhập số tiền vay, lãi suất và số tuần vay
    cout << "Nhap so tien vay (A): ";
    cin >> A;
    cout << "Nhap lai suat theo tuan (%) (L): ";
    cin >> L;
    cout << "Nhap so tuan (T): ";
    cin >> T;

    // Tính tổng tiền phải trả sau T tuần với lãi suất lãi kép
    double totalAmount = A * pow(1 + L / 100, T);

    // Hiển thị kết quả
    cout << "Tong so tien An phai tra sau " << T << " tuan la: " << totalAmount << " VND" << endl;

    return 0;
}
