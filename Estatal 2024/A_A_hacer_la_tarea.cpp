#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() { _

    int milis; cin >> milis;
    int segs = milis/1000;

    int mins = segs/60;
    segs %= 60;

    int hrs = mins/60;
    mins %= 60;

    string meridian;
    if (hrs < 12) {
        meridian = "a.m.";
    } else {
        meridian = "p.m.";
    }

    if (hrs > 12) {
        hrs %= 12;
    }

    if (hrs == 0) {
        cout << "12:";
    } else {
        cout << hrs << ":";
    }

    if (mins < 10) {
        cout << "0" << mins;
    } else {
        cout << mins;
    }
    cout << ":";

    if (segs < 10) {
        cout << "0" << segs;
    } else {
        cout << segs;
    }
    cout << " ";

    cout << meridian << endl;

	return 0;
}

