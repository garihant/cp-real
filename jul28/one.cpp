#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int numLen(int c) {
    int counter = 0;

    while (c != 0) {
        counter++;
        c = c / 10;
    }

    return counter;
}

bool checkArm(int num, int len) {
    int sums = 0;
    int numC = num;

    for (int i = 0; i < len; i++) {
        sums = sums + (pow((num%10), len));
        num = num / 10;
    }

    if (sums == numC) {
        return true;
    }

    return false;    
}

int main() {
    int low, up;
    cin >> low >> up;

    vector<int> nums;

    for (int i = low; i < up; i++) {
        if (checkArm(i, numLen(i))) {
            nums.push_back(i);
        } else {
            continue;
        }
    }

    if (nums.empty()) {
        cout << "-1" << endl;
    } else {
        for (int j : nums) {
            cout << j << endl;
        }        
    }
    
    return 0;
}