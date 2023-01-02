#include <iostream>

using namespace std;

int main()
{
    int hour;
    cin >> hour;

    if(hour <= 10 && hour >= 6){
        cout << "D\nD" << endl;
    }
    else if(hour <= 16 && hour >= 12){
            cout << "N\nR" << endl;
    }
    else if(hour <= 21 && hour >= 18){
            cout << "N\nV" << endl;
    }
    else{
        cout << "N\nN" << endl;
    }
    return 0;
}
