#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
 
int main()

{

    srand(static_cast<int>(time(0)));
    cout << "Введіть номер кольору(1-червоний, 2 - жовтий, 3- зелений): ";
    int a=0;
    cin >> a;
    if(a==1){
        cout << "\033[0;31m Привіт.\033[0;37m";
    }
    else if(a==2){
        cout << "\033[0;33m Привіт.\033[0;37m";
    }
    else if(a==3){
        cout << "\033[0;32m Привіт.\033[0;37m";
    }
    
    return 0;

}
 