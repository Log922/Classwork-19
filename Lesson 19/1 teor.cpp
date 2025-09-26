#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
 
int main()

{

    srand(static_cast<int>(time(0)));
    cout << "Введіть номер року: ";
    int a=0;
    cin >> a;
    if((a%4==0 && a%100!=0) || a%400==0){
        cout << "Високісний рік";
    }
    else{
        cout << "Не високісний рік";

    }
    return 0;

}
 