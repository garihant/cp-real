#include <bits/stdc++.h>
using namespace std;

float kaand(int juicy, int pussy) {
    return (pow(juicy, 0.5));
}

int main() {
    int juicy, pussy;
    cin >> juicy >> pussy;

    float res = kaand(juicy, pussy);
    cout << fixed << setprecision(pussy) << res << endl;

    return 0;
}