#include<iostream>

using namespace std;

bool isCheck(int nam) {
    return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
}

int fun(int thang, int nam) {
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (isCheck(nam))
            return 29;
        else
            return 28;
    default:
        cout << "So thang nhap khong hop le"<<endl;
        exit(0);
    }
}

int main()
{
    int thang, nam;
    do {
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;
    } while (nam < 0 || thang < 1 || thang >12);
    cout << "So ngay trong thang: " << fun(thang, nam) << endl;
    return 0;
}
