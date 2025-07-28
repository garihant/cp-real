#include <bits/stdc++.h>
using namespace std;

int vecSum(vector<int> arr) {
    int sums = 0;
    for (int i = 0; i < arr.size(); i++) {
        sums += arr[i];
    }

    return sums;
}

bool checkPerf(int n) {
    vector<int> temp;
    for (int i = 1; i < n; i++) {
        if ((n%i) == 0) {
            temp.push_back(i);
        }
    }

    int finSum = vecSum(temp);

    if (finSum == n) {
        return true;
    }

    return false;    
}

int main() {
    int n;
    cin >> n;
    bool res = checkPerf(n);

    if (res) {
        cout << "Perfect\n";
    } else {
        cout << "Not Perfect\n";
    }

    return 0;

}