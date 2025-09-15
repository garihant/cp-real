#include <bits/stdc++.h>
using namespace std;

int gaana(string pappu, int ls) {
    int chaman = -1;
    unordered_set<char> dangal;
    for (int i = 0; i < pappu.size(); i++) {
        dangal.clear();
        for (int j = i; j < pappu.size(); j++) {
            dangal.insert(pappu[j]);
            if (dangal.size() == ls) {
                chaman = max(chaman, j-i+1);
            }
            if (dangal.size() > ls) {
                break;
            }
        }
    }

    return chaman;
}

int main() {
    string pappu;
    int ls;
    cin >> pappu;
    cin >> ls;

    int baap = gaana(pappu, ls);
    cout << baap << endl;

    return 0;
}