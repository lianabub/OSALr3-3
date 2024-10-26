#include <iostream>
#include <math.h> 
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите количество коров";
    cin >> a;
    if (a % 10 = 0) {
        cout << "На лугу посется одна корова";
    }
    else if (a % 10 > 1 and a % 10 < 5) {
        cout << "На лугу посется" << a << "коровы";
    }
    else {
        cout << "На лугу посется " << a << "коров";
    }
    return 0;
   
    

