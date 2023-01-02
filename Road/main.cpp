#include <bits/stdc++.h>

using namespace std;
// ROAD
int main()
{
    //Initialization
    int town;
    vector<int> length;
    vector<int> towns;
    //Helper
    int input;
    int distance = 0;

    //Input
    cin >> town;
    for(int i = 0; i < town - 1; i ++){
        cin >> input;
        length.push_back(input);
    }
    for(int i = 0; i < 2; i ++){
        cin >> input;
        towns.push_back(input);
    }

    //Sorting
    sort(towns.begin(), towns.end());

    //Algorithm
    for(int i = towns[0] - 1; i < towns[1] - 1; i ++){
        distance += length[i];
    }

    //Output
    cout << distance << endl;
    return 0;
}
