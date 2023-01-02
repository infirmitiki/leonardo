#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> x1;
    vector<int> x2;
    vector<int> y1;
    vector<int> y2;
    int xi1;
    int xi2;
    int yi1;
    int yi2;

    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> xi1 >> yi1 >> xi2 >> yi2;
        x1.push_back(xi1);
        x2.push_back(xi2);
        y1.push_back(yi1);
        y2.push_back(yi2);
    }

    vector<int> xx[n];
    vector<int> yy[n];
    for(int i = 0;  i < n; i ++){
        if(x1[i] > x2[i]){
                yy[i].push_back(y1[i]);
            for(int x = x2[i]; x <= x1[i]; x ++){
                xx[i].push_back(x);
            }
        }
        else if(x2[i] > x1[i]){
            yy[i].push_back(y1[i]);
            for(int x = x1[i]; x <= x2[i]; x ++){
                xx[i].push_back(x);
            }
        }
        else{
            if(y1[i] > y2[i]){
                xx[i].push_back(x1[i]);
                for(int y = y2[i]; y <= y1[i]; y ++){
                    yy[i].push_back(y);
                }
            }
            else if(y2[i] > y1[i]){
                xx[i].push_back(x1[i]);
                for(int y = y1[i]; y <= y2[i]; y ++){
                    yy[i].push_back(y);
                }
            }
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j : xx[i]){
            cout << i + 1 << ". x:" << j << endl;
        }
        for(int j : yy[i]){
            cout << i + 1 << ". y:" << j << endl;
        }
    }
    return 0;
}
