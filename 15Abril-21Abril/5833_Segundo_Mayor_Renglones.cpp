#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() { _

    vector<int> vec;

    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    cout << vec[vec.size()-2] << endl;

	return 0;
}