#include <iostream>

using namespace std;
// OPTIONS
int main()
{
    int value;
    int third;
    int ways = 0;

    cin >> value;

    for(int i = 1; i < value; i ++){
        for(int j = i; j < value; j ++){
            third = value - i - j;
            if(third < j || third <= 0){
                break;
            }
            else{
                ways ++;
            }
        }
    }

    cout << ways << endl;
    return 0;
}
