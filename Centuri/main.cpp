#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    for(int i = 0; i < year; i ++){
        if(year > i * 100 && year <= i * 100 + 100){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
