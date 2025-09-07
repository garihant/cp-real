#include <bits/stdc++.h>
using namespace std;

long long int ggs(string ss) {
    long long int count = 1;
    vector<long long int> vals;
    for (long long int i = 1; i < ss.length()+1; i++) {
        if (ss[i-1] == ss[i]) {
            count++;
        } else {
            vals.push_back(count);
            count = 1;
        }
    }

    long long int maxs = 0;
    for (int s : vals) {
        if (s > maxs) {
            maxs = s;
        }
    }

    return maxs;
}

int main() {
    string s;
    cin >> s;

    long long int res = ggs(s);

    cout << res << endl;

    return 0;
}