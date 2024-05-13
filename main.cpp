#include <iostream>
using namespace std;
// Ngăn xếp đảo ngược chữ :
// ta cần biến topOfStack : chỉ mục phần tử ở đầu ngăn xếp
// có 3 thao tác chính và 2 thao tác phụ:
// 1- lấy phần tử ra : pop ->
// 2 - thêm phần tử vào: push
// 3 - truy cập phần tử

// 4 - kiểm tra rỗng : if (topOfstack == -1)
// 5 - kiểm tra kích thước = topOfstack + 1

void push(int arr[], int topOfStack) {
cout << "Nhap gia tri them vao: ";
cin >> arr[topOfStack];
}
int main() {
    // chương tình ngăn xếp đảo ngược số:
    int topOfStack = -1;
    int arr[10];
    int choice;
    while (true) {
        cout << "Chuong trinh Ngan Xep. Dao nguoc chuoi so nhap vao, do dai toi da la 10." << endl;
        cout << "Vui long chon chuc nang: " << endl;
        cout << "1 - Them phan tu vao mang." << endl;
        cout << "2 - Xuat ra gia tri phan tu dau mang." << endl;
        cout << "3 - Thay doi gia tri o dau mang." << endl;
        cout << "4 - Xoa gia tri phan tu dau mang." << endl;
        cout << "5 - Xuat ra chuoi so va thu tu, tu tren xuong duoi." << endl;
        cout << "6 - Dung chuong  trinh." << endl;
        cout << "------------------" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        if (choice == 1) { // push
            topOfStack++;
            cout << "Nhap gia tri phan tu them vao: ";
          cin >> arr[topOfStack];
          cout << "Phan tu da duoc them vao mang." << endl;
            cout << "------------------" << endl;
            continue;
        } else if (choice == 2) {
            if(topOfStack >= 0) {
                cout << "Gia tri phan tu o dau mang hien tai la: " << "\"" << arr[topOfStack] << "\"" << endl;
            } else {
                cout << "Mang dang rong" << endl;
                cout << "------------------" << endl;
            }
            continue;
        } else if (choice == 3) {
            cout << "Nhap gia tri phan tu moi: ";
            cin >> arr[topOfStack];
            cout << "Phan tu o dau mang da duoc thay doi." << endl;
            cout << "------------------" << endl;
            continue;
        } else if (choice == 4) {
          topOfStack--;
            cout << "Da xoa gia tri o dau mang." << endl;
            cout << "------------------" << endl;
            continue;
        } else if (choice == 5) {
            for(int i = topOfStack; i >= 0; i--) {
                cout << "Phan tu \"" << arr[i] << "\" o vi tri thu " << i + 1 << endl;
            }
            cout << "------------------" << endl;
            continue;
        } else if (choice == 6) {
            cout << "Chuong trinh da duoc dung. ";
            break;
        } else {
            cout << "Loi cu phap. Vui long chon dung chuc nang theo so !";
            cout << "------------------" << endl;
            continue;
        }
    }
}
