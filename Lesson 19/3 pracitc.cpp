#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
 
int main()

{

    srand(static_cast<int>(time(0)));
    cout << "Введіть ширину: ";
    int height=0;
    cin >> height;
    cout << "Введіть висоту: ";
    int width=0;
    cin >> width;
    cout << "Введіть знак: ";
    char znak='d';
    cin >> znak;
    cout << "Введіть color(червоний=1, синій=2, фіолетовий=3): ";
    int color=0;
    cin >> color;
    if (color==1) cout << "\033[0;31m";
    else if (color==2) cout << "\033[0;34m";
    else if (color==3) cout << "\033[0;35m";
    for(int i=1; i<=height;i++){
        for(int i=1; i<=width;i++){
            cout << znak;
        }
        cout << endl;
    }
    cout << "\033[0;37m";
    
    return 0;

}
 