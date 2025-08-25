#include <bits/stdc++.h>
using namespace std;

struct Ops {
    int len;
    Ops(int l) {
        len = l;
    }
	vector<long long> arr;
	Ops() {
	}

    void insEle() {
		long long tc;
		for (int i = 0; i < len; i++) {
			cin >> tc;
			arr.push_back(tc);
		}
    }

    long long returnSum() {
	    long long sum = 0;
	    for (int i = 0; i < len; i++) {
		    sum = sum + arr[i];
	    }
	return sum;
    }

    vector<long long> calc() {
	    long long bsum = returnSum();
	    long long asum = bsum / (len+1);
	    vector<long long> brr;
	    for (int i = 0; i < len; i++) {
		    brr.push_back(arr[i] - asum);
	    }

	    return brr;
    }
};

int main() {
    int n;
    cin >> n;
    Ops arr[n];
    int tc;
    for (int i = 0; i < n; i++) {
		cin >> tc;
		arr[i] = Ops(tc);
		arr[i].insEle();
    }

    vector<vector<long long>> jesus;

    for (int i = 0; i < n; i++) {
	    jesus.push_back(arr[i].calc());
    }

    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < jesus[i].size(); j++) {
		    cout << jesus[i][j] << " ";
	    }
		cout << endl;
    }

    return 0;
}
