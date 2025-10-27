#include <bits/stdc++.h>
using namespace std;

void displ(vector<int> haha) {
	for (int i = 0; i < haha.size(); i++) {
		cout << haha[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> arr = {1,2,3,-1,4};
	int n = 5;
	vector<int> fin;

	int tempsum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k < j; k++) {
				tempsum += arr[k];
			}
			fin.push_back(tempsum);
			tempsum = 0;
		}
	}

	displ(fin);

	return 0;
}
