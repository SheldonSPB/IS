#include <iostream>
using namespace std;
int main()
{
    int a;
    setlocale(LC_ALL, "rus");
    cout << "Сколько тебе лет?" << endl;
    cin >> a;
    if (a < 18){
        cout << "Доступ запрещён!" << endl;
    }
    else cerror << "Доступ открыт!" << endl;
    return 0;
}

