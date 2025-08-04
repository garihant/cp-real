#include <bits/stdc++.h>
using namespace std;

bool checkeve(int n) {
    int sums = 0;
    do {
        sums = sums + (n % 10);
        n = n / 10;
    } while (n % 10 != 0);

    if (sums % 2 == 0) {
        return true;
    }

    return false;
}

int main() {
    int l, r;
    cin >> l >> r;
    int counter = 0;

    for (int i = l; i <= r; i++) {
        if ((i % 3 == 0) && checkeve(i)) {
            counter++;
        }        
    }

    cout << counter << endl;
}