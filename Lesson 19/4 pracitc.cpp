#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
 
int main()

{

    srand(static_cast<int>(time(0)));
    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 10;        
        cout << *(arr + i) << " ";  
    }
    return 0;

}
 