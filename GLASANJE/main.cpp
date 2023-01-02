#include <bits/stdc++.h>

using namespace std;

bool iscapital(char j)
{
    int i = j;
    if(i > 64 && i < 91){
        return true;
    }
    return false;
}

bool werdoibelong(string range, char capital)
{
    int from = range[0];
    int to = range[2];
    int i = capital;
    if(i >= from && i <= to){
        return true;
    }
    return false;
}

int main()
{
    int itn;
    int teechr;
    vector<string> names;
    vector<string> surnames;
    vector<string> surnameff;
    string darnInput;

    cin >> itn;
    for(int i = 0; i < itn; i ++){
        cin >> darnInput;
        surnameff.push_back(darnInput);
    }
    cin >> teechr;
    for(int i = 0; i < teechr; i ++){
        cin >> darnInput;
        names.push_back(darnInput);
        cin >> darnInput;
        surnames.push_back(darnInput);
    }

    vector<char> firstletters[teechr];
    vector<int> reng[itn];
    int range[itn];
    for(int i = 0; i < itn; i ++){
        range[i] = 0;
    }

    for(int i = 0; i < teechr; i ++){
        for(char j : surnames[i]){
            if(iscapital(j)){
                firstletters[i].push_back(j);
            }
        }
    }

    for(int i = 0; i < teechr; i ++){
            for(int k = 0; k < itn; k ++){
                if(werdoibelong(surnameff[k], firstletters[i][0])){
                    reng[k].push_back(i);
                    break;
                }
            }
    }

    map<string, string> e;

    for(int i = 0; i < itn; i ++){
        for(int j : reng[i]){
            range[i] ++;
            e[names[j]] = surnameff[i];
        }
    }

    int best = -1;
    int ordr;
    for(int i = 0; i < itn; i ++){
        if(range[i] > best){
            best = range[i];
            ordr = i;
        }
    }

    cout << e[names[teechr - 1]] << endl;

    vector<string> o;
    for(int i : reng[ordr]){
        o.push_back(names[i] + " " + surnames[i]);
    }

    sort(o.begin(), o.end());

    for(string i : o){
        cout << i << endl;
    }
    return 0;
}
